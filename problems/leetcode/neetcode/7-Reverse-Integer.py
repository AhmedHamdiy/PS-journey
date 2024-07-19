class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        x *= sign
        ans = 0
        while x:
            ans = ans * 10 + x % 10
            x //= 10
        ans *= sign
        if ans > 2 ** 31 - 1 or ans < -2 ** 31:
            return 0
        return ans