/*
// Definition for a Node.
public class Node {
    public int val;
    public Node next;
    public Node random;
    
    public Node(int _val) {
        val = _val;
        next = null;
        random = null;
    }
}
*/

/*
// Definition for a Node.
public class Node {
    public int val;
    public Node next;
    public Node random;
    
    public Node(int _val) {
        val = _val;
        next = null;
        random = null;
    }
}
*/

public class Solution {
    public Node CopyRandomList(Node head) {
        if (head == null)
            return head;
            
        var current = head;
        
        while (current != null)
        {
            var tmp = new Node(current.val);
            tmp.next = current.next;
            current.next = tmp;
            current = tmp.next;
        }

        current = head;
        
        while (current != null)
        {
            if (current.random != null)
            {
                current.next.random = current.random.next;
            }
            current = current.next.next;
        }

        current = head;
        var newhead = head.next;
        var newcurrent = newhead;
        while (current != null)
        {
            current.next = newcurrent.next;
            newcurrent.next = newcurrent.next?.next;

            current = current.next;
            newcurrent = newcurrent.next;
        }
        

        return newhead;
    }
}