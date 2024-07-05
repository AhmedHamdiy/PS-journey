class Node{
    public int val;
    public Node next;
    public Node min;
    public Node(int data){
        next=null;
        min=this;
        val=data;
    } 
}
class MinStack {
    private Node head;
    private int size;
    public MinStack() {
        size=0;
        head=null;
    }
    
    public void push(int val) {
        if(size!=0){
            Node node= new Node(val);
            if(head.min.val<=val)
                node.min=head.min;
            node.next=head;
            head=node;
        }
        else 
            head=new Node(val);
        size++;
    }
    
    public void pop() {
        head=head.next;
        size--;
    }
    
    public int top() {
        return head.val;
    }
    
    public int getMin() {
        return head.min.val;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */