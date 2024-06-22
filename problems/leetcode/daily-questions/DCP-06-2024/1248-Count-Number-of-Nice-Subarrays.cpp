class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int ans=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                count++;
            }
            if(count==k){
                ans++;
            }
            int n=count-k;
            ans=ans+m[n];
            m[count]++;

        }
        return ans;
    }
};