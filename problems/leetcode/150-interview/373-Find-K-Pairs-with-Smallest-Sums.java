class Solution {
    public List<List<Integer>> kSmallestPairs(int[] nums1, int[] nums2, int k) {
        List<List<Integer>> res = new ArrayList<>();
        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));
        
        for (int num : nums1) {
            pq.offer(new int[]{num + nums2[0], 0});
        }
        
        while (k-- > 0 && !pq.isEmpty()) {
            int[] cur = pq.poll();
            int sum = cur[0], j = cur[1];
            res.add(Arrays.asList(sum - nums2[j], nums2[j]));
            
            if (j + 1 < nums2.length) {
                pq.offer(new int[]{sum - nums2[j] + nums2[j + 1], j + 1});
            }
        }
        
        return res;
    }
}