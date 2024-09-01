class Solution:
    def getSum(self, a: int, b: int) -> int:
        x = 0xffffffff 
        while (b & x):
            carry = (a & b) << 1
            a = a ^ b
            b = carry 
        return a & x if b else a