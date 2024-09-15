class Solution:
    def findTheLongestSubstring(self, s: str) -> int:
        mp = [-2] * 32
        mp[0] = -1
        ans = 0
        mask = 0
        for i, char in enumerate(s):
            if char == 'a':
                mask ^= 1
            elif char == 'e':
                mask ^= 2
            elif char == 'i':
                mask ^= 4
            elif char == 'o':
                mask ^= 8
            elif char == 'u':
                mask ^= 16

            prev = mp[mask]
            if prev == -2:
                mp[mask] = i
            else:
                ans = max(ans, i - prev)

        return ans