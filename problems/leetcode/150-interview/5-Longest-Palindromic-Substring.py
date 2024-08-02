class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        max_len = 1
        ans = s[0] 
        dp = [[0] * (n) for _ in range(n)]
        for i in range(n):
            dp[i][i]=True
            for j in range(i):
                if s[i]==s[j] and (i<=j+2 or dp[j+1][i-1]):
                    dp[j][i]= True
                    if i-j+1>max_len:
                        max_len=i-j+1
                        ans=s[j:i+1]
        return ans
        
