/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution
{
    public ListNode RemoveNthFromEnd(ListNode node, int n)
    {
        return RemoveNthFromEndHelper(node, ref n);
    }

    public ListNode RemoveNthFromEndHelper(ListNode node, ref int n)
    {
        if (node is null)
        {
            return null;
        }

        node.next = RemoveNthFromEndHelper(node.next, ref n);
        n--;

        if (n == 0)
        {
            return node.next;
        }

        return node;
    }
}