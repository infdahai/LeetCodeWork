/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int addi = 0,v1=0,v2=0,v3=0;
        ListNode* res = new ListNode(0);
        ListNode* a = res;
        while(l1 || l2 || addi)
        {   
            if(l1!=nullptr)
            {
                v1 = l1->val;
                l1 = l1->next;
            }else{
                v1 = 0;
            }
            
              if(l2!=nullptr)
            {
                v2 = l2->val;
                l2 = l2->next;
            }else{
                v2 = 0;
            }
            
            v3 = v2+v1+addi;
            addi = v3/10;
            v3 = v3 % 10;
            a->next = new ListNode(v3);
            a = a->next;
        } 
        return  res->next;
    }
};
