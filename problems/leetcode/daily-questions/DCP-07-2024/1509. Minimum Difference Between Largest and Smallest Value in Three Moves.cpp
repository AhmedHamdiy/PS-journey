class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)
            return 0;
        sort(nums.begin(),nums.end());
        int ans=nums.back()-nums[0];
        for(int i=0;i<=3;i++){
            ans=min(ans,nums[n+i-4]-nums[i]);
        }
        return ans;
    }
};
