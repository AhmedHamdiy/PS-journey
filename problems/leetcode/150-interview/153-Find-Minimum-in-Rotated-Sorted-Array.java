class Solution {
    public int findMin(int[] nums) {
      int st = 0, nd = nums.length -1, mid;
        while(st < nd){
            mid = (st + nd) / 2;
            if(nums[mid] < nums[nd]) 
                nd = mid;
            else 
                st = mid + 1;
        }
        return nums[st];
    }
}