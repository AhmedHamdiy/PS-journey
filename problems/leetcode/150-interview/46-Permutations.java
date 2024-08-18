class Solution {
    public List<List<Integer>> permute(int[] nums) {
        int n=nums.length ;
        List<List<Integer>> res = new ArrayList<>();
        if (n== 1) {
            List<Integer> l = new ArrayList<>();
            l.add(nums[0]);
            res.add(l);
            return res;
        }

        for (int i = 0; i < n; i++) {
            int m = nums[i];
            int[] a = new int[n - 1];
            int idx = 0;
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    a[idx] = nums[j];
                    idx++;
                }
            }
            
            List<List<Integer>> ps = permute(a);
            for (List<Integer> p : ps)
                p.add(m);
            
            res.addAll(ps);
        }
        
        return res;        
    }
}