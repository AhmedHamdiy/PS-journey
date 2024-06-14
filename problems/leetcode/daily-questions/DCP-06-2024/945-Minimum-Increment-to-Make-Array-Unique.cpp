class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                int steps=nums[i-1]-nums[i]+1;
                nums[i]+=steps;
                ans+=steps;
            }
        }
        return ans;
    }
};