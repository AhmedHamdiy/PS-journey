/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {number[]} nums
 * @param {ListNode} head
 * @return {ListNode}
 */
var modifiedList = function(nums, head) {
       const set = new Set(nums);
           let cur = new ListNode(null, head);
               let newHead = cur;

                   while(cur.next) {
                           if(set.has(cur.next.val)) {
                                       cur.next = cur.next.next;
                                               } else {
                                                           cur = cur.next;
                                                                   }
                                                                       }

                                                                           return newHead.next; 
};