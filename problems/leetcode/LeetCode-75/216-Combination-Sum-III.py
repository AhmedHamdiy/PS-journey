class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        res = []
        for i in range(1<<9):
            s, l = 0, []
            for j in range(9):
                if i & 1 << j:
                    l.append(j+1)
                    s += j+1
            if s == n and len(l)== k:
                res.append(l)
        return res