class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        cnt , ans = 0, 0
        for c in s:
            if c == '(':
                cnt += 1
            elif cnt > 0:
                cnt -= 1
            else:
                ans += 1
        ans+= cnt
        return ans
