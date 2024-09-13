# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        if head.next == None:
            return None
        if head.next.next == None:
            head.next = None
            return head
        prev, slow, fast = head, head.next, head.next.next

        while fast != None and fast.next != None:
            prev=slow
            slow= slow.next
            fast=fast.next.next
        prev.next=slow.next
        return head