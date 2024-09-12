class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        ans , n = 0 , len(grid)
        def compareRowCol(row: List[int], col: int):
            for i in range(n):
                if row[i] != grid[i][col]:
                    return False
            return True
        
        for i in range(n):
            for j in range(n):
                ans = ans+1 if compareRowCol(grid[i],j) else ans
        return ans