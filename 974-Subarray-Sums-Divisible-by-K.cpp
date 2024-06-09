class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0, sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int num : nums) {
            sum += num;
            int rem = sum % k;
            if (rem < 0) {
                rem += k; 
            }
            ans += mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};
