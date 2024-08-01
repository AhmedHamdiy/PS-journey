class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n= len(s)
        max_len= len(max(wordDict,key=len))
        dp = [False] * (n+1)
        dp[0] = True
        for i in range(1,n+1):
            for j in range(i-1,-1,-1):
                if(i-j>max_len):
                    break
                if(dp[j] and s[j:i] in wordDict):
                    dp[i] = True
                    break
        return dp[n]