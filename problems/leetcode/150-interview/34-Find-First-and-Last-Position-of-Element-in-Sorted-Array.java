class Solution {
    public int[] searchRange(int[] nums, int target) {
        int i = 0;
        int j = nums.length-1;
        int ans[] = {-1 , -1};

        if(nums.length == 1)
            if(nums[0] == target)
                return new int[]{0, 0};
            else
                return new int[]{-1, -1};

        while(i <= j){
            if(nums[i] != target)
                i++;
            if(nums[j] != target)
                j--;
            if(nums[i] == target && nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
        return ans;
    }
}