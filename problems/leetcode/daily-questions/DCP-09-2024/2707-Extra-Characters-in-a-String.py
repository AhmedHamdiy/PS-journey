class Solution:
    def minExtraChar(self, s: str, dictionary: List[str]) -> int:
        n = len(s)
        d = defaultdict(list)
        for word in dictionary:
            d[word[0]].append(word)
        dp = [0] * (n+1)
        
        for i in range(n-1, -1, -1):
            dp[i] = dp[i+1] + 1  
            
            if s[i] in d:
                for word in d[s[i]]:
                    if s[i:i+len(word)] == word:
                        dp[i] = min(dp[i], dp[i+len(word)])
                        
        return dp[0]