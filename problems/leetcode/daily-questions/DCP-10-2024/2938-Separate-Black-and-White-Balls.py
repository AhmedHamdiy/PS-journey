class Solution:
    def minimumSteps(self, s: str) -> int:
        n = len(s)
        l, r, ans = 0, 0, 0
        while(r<n):
            if s[r]=='0':
                ans+=r-l
                l+=1
            r+=1
        return ans