class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> mp;
        vector<int> res;
        int length = words[0].size();
        mp.clear();
        for (const string& word : words)
            mp[word]++;
        for (int offset = 0; offset < length; ++offset) {
            int size = 0;
            unordered_map<string, unsigned int> seen;
            for (int i = offset; i + length <= s.size(); i += length) {
                string sub = s.substr(i, length);
                auto it = mp.find(sub);
                if (it == mp.end()) {
                    seen.clear();
                    size = 0;
                    continue;
                }
                seen[sub]++;
                size++;
                while (seen[sub] > it->second) {
                    string first = s.substr(i - (size - 1) * length, length);
                    seen[first]--;
                    size--;
                }
                if (size == words.size())
                    res.push_back(i - (size - 1) * length);
            }
        }
        return res;
    }
};