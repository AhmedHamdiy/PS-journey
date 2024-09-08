/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {ListNode} head
 * @param {TreeNode} root
 * @return {boolean}
 */
var isSubPath = function(head, root) {
    
        return dfs(head, head, root);
        };

        var dfs = function(head, cur, root) {
            if (cur === null) return true;  
                if (root === null) return false;
                    
                        if (cur.val === root.val) {
                                cur = cur.next;  
                                    } else if (head.val === root.val) {
                                            head = head.next; 
                                                } else {
                                                        cur = head;  
                                                            }
                                                               
                                                                   return dfs(head, cur, root.left) || dfs(head, cur, root.right);
                                                                   
};