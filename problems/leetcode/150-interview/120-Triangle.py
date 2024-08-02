class Solution:
    def minimumTotal(self, mat: List[List[int]]) -> int:
        for i in range(1, len(mat)): 
            for j in range(i+1):          
                mat[i][j] += min(mat[i-1][j-(j==i)],mat[i-1][j-(j>0)])
        return min(mat[-1]) 