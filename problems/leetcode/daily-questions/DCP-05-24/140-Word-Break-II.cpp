class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        vector<vector<string>> dp(n + 1);
        dp[0].push_back(\\);
        for (int i = 1; i <= n; i++) {
            vector<string> temp;
            for (int j = 0; j < i; j++) {
                string suffix = s.substr(j, i - j);
                if (wordSet.find(suffix) != wordSet.end()) {
                    for (const string& substring : dp[j]) {
                        temp.push_back(substring + (substring.empty() ? \\ : \ \) + suffix);
                    }
                }
            }
            dp[i] = temp;
        }
        return dp[n];
    }
};