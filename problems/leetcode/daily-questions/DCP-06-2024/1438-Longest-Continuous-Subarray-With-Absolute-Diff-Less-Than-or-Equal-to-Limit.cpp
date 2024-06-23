class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>s;
        int l=0,r=0,ans=1;
        while(r<nums.size()){
            s.insert(nums[r]);
            while(!s.empty() && *s.rbegin()-*s.begin() > limit){
                s.erase(s.find(nums[l++])) ;
            }
            ans=max(ans,r-l+1);
            r++;
        }
     return ans;
    }
};