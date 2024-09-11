class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        res = start ^ goal
        cnt = 0
        while res:
            res &= res - 1
            cnt += 1
        return cnt