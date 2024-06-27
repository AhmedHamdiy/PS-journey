
class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || t.size()>s.size()) {
            return \\;
        }
        unordered_map<char, int> mp,counts;
        for (char c : t)  
            mp[c]++;
        int required = mp.size(),minSize=INT_MAX,minL=0,l = 0, r = 0,formed = 0;

        while (r < s.length()) {
            char c = s[r];
            counts[c]++;
            if (mp.find(c) != mp.end() && counts[c] == mp[c]) {
                formed++;
            }

            while (l <= r && formed == required) {
                c = s[l];
                if (r - l + 1 < minSize) {
                    minSize=r-l+1;
                    minL = l;
                }
                counts[c]--;
                if (mp.find(c) != mp.end() && counts[c] < mp[c]) {
                    formed--;
                }
                l++;
            }
            r++;
        }

        return minSize == INT_MAX ? \\ : s.substr(minL, minSize);
    }
};



