class Solution:
    def solve(self, board: List[List[str]]) -> None:
        if not board or not board[0]:
            return
        
        m, n = len(board), len(board[0])
        directions = [(1, 0), (0, 1), (-1, 0), (0, -1)]
        
        def dfs(i, j):
            board[i][j] = 'A'
            for x, y in directions:
                x1, y1 = i + x, j + y
                if 0 <= x1 < m and 0 <= y1 < n and board[x1][y1] == 'O':
                    dfs(x1, y1)
        
        for i in range(m):
            for j in range(n):
                if i == 0 or i == m - 1 or j == 0 or j == n - 1:
                    if board[i][j] == 'O':
                        dfs(i, j)
        
        for i in range(m):
            for j in range(n):
                if board[i][j] == 'O':
                    board[i][j] = 'X'
        
        for i in range(m):
            for j in range(n):
                if board[i][j] == 'A':
                    board[i][j] = 'O'