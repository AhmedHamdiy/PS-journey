# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        if head.next.next == None:
            return head.val + head.next.val

        prev, slow, fast = head, head.next, head.next.next

        while fast != None and fast.next != None:
            prev=slow
            slow= slow.next
            fast=fast.next.next
        prev.next = None
        
        def reverseList(head):
            new_list = None
            current = head

            while current:
                next_node = current.next
                current.next = new_list
                new_list = current
                current = next_node
            
            return new_list
        p2 = reverseList(slow)
        ans = 0
        p1 = head
        while p1 is not None: 
            ans= max(ans,p1.val+p2.val)
            p1=p1.next
            p2=p2.next
        return ans