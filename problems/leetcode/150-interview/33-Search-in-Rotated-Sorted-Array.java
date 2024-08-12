class Solution {
    public int search(int[] nums, int target) { 
        int st =0; 
        int nd = nums.length-1;
        while (st<=nd){
            int mid = st+ (nd-st)/2;
            if(nums[mid]==target) 
                return mid;
            else if(nums[st]<=nums[mid])
                if(target>=nums[st]&&target<=nums[mid])
                    nd = mid-1;
                else
                    st = mid+1;
            else
                if(target>=nums[mid] && target<=nums[nd])
                    st = mid+1;
                else
                    nd = mid-1;
        }
        return -1;
    }
}