public class Solution {
    public int[] ProductExceptSelf(int[] nums) {
        int n = nums.Length;
        int[] right = new int[n];
        int[] res = new int[n];
        
        int prod = 1;
        for(int i = n - 1; i >= 0; i--) {
            prod *= nums[i];
            right[i] = prod;
        }

        prod = 1;
        for(int i = 0; i < n - 1; i++) {
            int lp = prod;
            int rp = right[i + 1];

            res[i] = rp * lp;
            prod *= nums[i]; 
        }
        res[n - 1] = prod;
        return res;
    }
}