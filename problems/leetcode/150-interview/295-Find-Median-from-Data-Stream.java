class MedianFinder {

    PriorityQueue<Integer> l;
     PriorityQueue<Integer> r;
    public MedianFinder() {
        l=new  PriorityQueue<Integer>(Collections.reverseOrder());
        r=new  PriorityQueue<Integer>();
    }
    
    public void addNum(int num) {
        if(l.isEmpty() || l.peek()>=num)
            l.add(num);
        else
            r.add(num);

        if(l.size()>r.size()+1)
            r.add(l.remove());
        else if(l.size()<r.size())
            l.add(r.remove());
    }
    
    public double findMedian() {
        if(l.size()>r.size())
            return (double)l.peek();
        return ((double)l.peek()+(double)r.peek())/2.0;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */