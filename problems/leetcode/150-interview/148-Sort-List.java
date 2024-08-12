/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode sortList(ListNode head) {
             if (head == null || head.next == null) {
            return head;
        }
        List<Integer> elements = new ArrayList<>();
        ListNode current = head;
        while (current != null) {
            elements.add(current.val);
            current = current.next;
        }
        Collections.sort(elements);
        ListNode res = new ListNode(elements.get(0));
        ListNode resP = res;
        for (int i = 1; i < elements.size(); i++) {
            resP.next = new ListNode(elements.get(i));
            resP = resP.next;
        }

        return res;
    }
}