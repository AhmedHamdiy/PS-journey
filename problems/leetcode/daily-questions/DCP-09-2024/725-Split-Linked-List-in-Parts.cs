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
 public class Solution {
    public ListNode[] SplitListToParts(ListNode head, int k) {
        
        int length = 0;
        ListNode current = head;
        while (current != null) {
            length++;
            current = current.next;
        }

        
        int sz = length / k;
        int rem = length % k;
        
        
        ListNode[] l = new ListNode[k];
        current = head;

        for (int i = 0; i < k; i++) {
            l[i] = current;  
            int currentsz = sz + (i < rem ? 1 : 0);  
            
            for (int j = 0; j < currentsz - 1 && current != null; j++) {
                current = current.next;
            }
            
            if (current != null) {
                ListNode temp = current.next;
                current.next = null;
                current = temp;
            }
        }
        
        return l;
    }
}