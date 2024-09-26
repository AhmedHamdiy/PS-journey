class Solution:
    def minFlips(self, a: int, b: int, c: int) -> int:
        ans = 0
        while c or a or b:
            bit_a = a & 1
            bit_b = b & 1
            bit_c = c & 1
            
            if bit_c == 1:
                if bit_a == 0 and bit_b == 0:
                    ans+=1
            else:
                if bit_a == 1:
                    ans+=1
                if bit_b == 1:
                    ans+=1
            a >>=1
            b >>=1
            c >>=1
            
        return ans