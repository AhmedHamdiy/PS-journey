public class Solution {
    public bool IncreasingTriplet(int[] nums) {
        if(nums.Length < 3) return false;
        int smallest = int.MaxValue;
        int secondSmallest = int.MaxValue;

        for(int i = 0; i < nums.Length; i++){
            if(nums[i] <= smallest)
                smallest = nums[i];
            else if(nums[i] <= secondSmallest)
                secondSmallest = nums[i];
            else 
                return true; 
        }
        return false;
    }
}