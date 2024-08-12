class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = new int[2];
        ans[0]=-1;
        ans[1]=-1;
        int i=0;
        for(i=0;i<nums.length;i++){
            if(nums[i]==target){
                ans[0]=i;
                ans[1]=i;
                break;
            }
        }
        for(int j=i;j<nums.length-1;j++){
            if(nums[j]==nums[j+1]){
                ans[1]=j+1;
            }else{
                break;
            }
        }
        return ans;
    }
}
