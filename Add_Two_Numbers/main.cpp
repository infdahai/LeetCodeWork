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
        int val_1=0,val_2=0;
        int i = 1;
        while(l1!=nullptr)
        {
            val_1 += i*l1->val;
//            cout<<val_1<<endl;
            i*=10;
            l1 = l1->next;
        }
        i = 1;
        while(l2!=nullptr)
        {
            val_2 += i*l2->val;
    //        cout<<val_2 <<endl;
            i*= 10;
            l2 = l2->next;
        }
        int val_3 = val_1+val_2;
        ListNode*res = new ListNode(val_3%10);
        ListNode* a = res;
        cout<<res<<endl;
        cout<<a<<endl;
        while(val_3>=10)
        {   
            val_3 /= 10;
            ListNode* ne = new ListNode(val_3%10);
            cout<<val_3%10<<endl;
            cout<<ne<<endl;
            a->next = ne;
            a = a->next;
        }
        return res;
    }
};
