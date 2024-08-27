public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if (nums.Length <= 2) return nums.Length;
        int idx = 2; 
        for (int i = 2; i < nums.Length; i++) {
            if (nums[i] != nums[idx - 2]) {
                nums[idx++] = nums[i]; 
            }
        }
        return idx; 
    }
}