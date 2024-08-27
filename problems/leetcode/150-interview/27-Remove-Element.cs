public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int idx = 0;
        for (int i = 0; i < nums.Length; i++){
            if(nums[i] != val)
                nums[idx++] = nums[i];
        }
        return idx;
    }
}