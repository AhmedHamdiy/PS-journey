class Solution {
    public int findPeakElement(int[] nums) {
\t\tif(nums.length == 1) 
            return 0;
        int n = nums.length;
        if(nums[0] > nums[1]) 
            return 0;
        if(nums[n-1] > nums[n-2]) 
            return n-1;
        int st = 1;
        int nd = n-2;
        while(st <= nd) {
            int mid = st + (nd - st)/2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) 
                return mid;
            else if(nums[mid] < nums[mid-1]) 
                nd = mid - 1;
            else if(nums[mid] < nums[mid+1]) 
                st = mid + 1;
        }
        return -1;
    }
}