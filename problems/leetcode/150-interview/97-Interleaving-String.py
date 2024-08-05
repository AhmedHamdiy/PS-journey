class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        m, n, l = len(s1),len(s2),len(s3)
        if l != m+n:
            return False
        if m<n:
            return self.isInterleave(s2,s1,s3)
        
        dp = [False]* (n+1)
        dp[0] = True
        for i in range(1,n+1):
            dp[i] = dp[i-1] and s2[i-1] == s3[i-1]
        
        for i in range(1,m+1):
            dp[0] = dp[0] and s1[i-1] == s3[i-1]
            for j in range(1,n+1):
                dp[j] = (dp[j] and s1[i-1] == s3[i+j-1]) or (dp[j-1] and s2[j-1] == s3[i+j-1])
        
        return dp[-1]