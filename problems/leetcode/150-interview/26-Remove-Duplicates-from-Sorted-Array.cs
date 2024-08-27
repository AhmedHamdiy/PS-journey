public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int idx = 0;
        for(int i =1; i < nums.Length; i++){
            if(nums[idx] != nums[i])
                nums[++idx] = nums[i];
        }
        return idx+1;
    }
}