class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minSize=nums.size()+1, l=0, r=0, sum=0;
        while(r<nums.size()){
        sum+=nums[r];
        while (sum>=target&&l<nums.size()){
         minSize=min(minSize, r-l+1);
         sum-=nums[l++];
         }
         r++;
         }
         return minSize==nums.size()+1?0:minSize;
    }
};