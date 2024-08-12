class Solution {
    class Pair {
        int first;
        int second;
        
        Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }
    
    public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
        int j = 0;
        int n = profits.length;
        List<Pair> temp = new ArrayList<>();
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());

        for (int i = 0; i < n; ++i) {
            temp.add(new Pair(capital[i], profits[i]));
        }

        Collections.sort(temp, Comparator.comparingInt(p -> p.first));
        
        while (k-- > 0) {
            while (j < n && w >= temp.get(j).first) {
                maxHeap.offer(temp.get(j++).second);
            }

            if (maxHeap.isEmpty()) break;
            w += maxHeap.poll();
        }

        return w;
    }
}