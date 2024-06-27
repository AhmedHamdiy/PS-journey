class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0;
        int right = 0;
        int ans = 0;
        while(right < s.size()) {
            auto i = mp.find(s[right]);
            if(i != mp.end() && i->second >= left) {
                left = i->second + 1;
            } else {
                ans = max(ans, right - left + 1);
            }
            mp[s[right]] = right;
            right++;
        }
        return ans;
    }
};