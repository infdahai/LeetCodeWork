# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        i=j= 0
        addi = 0
        result = ListNode(0)
        a = result
        while l1 or l2 or addi:
            var_1,l1 = (l1.val,l1.next) if l1 else(0,None)
            var_2,l2 = (l2.val,l2.next) if l2 else(0,None)
            addi, div= divmod(var_1+var_2+addi,10)
            a.next = ListNode(div)
            a =a.next
        return result.next
