class Solution:
    def uniquePathsWithObstacles(self, A: List[List[int]]) -> int:
        if A[0][0] or A[-1][-1]:
            return 0
        rangeN, rangeM, source = range(len(A)), range(len(A[0])), [(-1, 0), (0, -1)]
        A[0][0] = -1
        for i, j, (_i, _j) in product(rangeN, rangeM, source):
            if A[i][j] == 1:
                continue
            try:
                if i+_i != -1 and j+_j != -1 and A[i+_i][j+_j] != 1:
                    A[i][j] += A[i+_i][j+_j]
            except:
                pass
        return -A[-1][-1]
