class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        q = deque()
        cnt = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 2:
                    q.append((i, j))
                if grid[i][j] == 1:
                    cnt += 1
        if cnt == 0:
            return 0
        if not q:
            return -1
        
        minutes = -1
        dirs = [(1, 0), (-1, 0), (0, -1), (0, 1)]
        while q:
            size = len(q)
            for _ in range(size):
                x, y = q.popleft()
                for dx, dy in dirs:
                    i, j = x + dx, y + dy
                    if 0 <= i < m and 0 <= j < n and grid[i][j] == 1:
                        grid[i][j] = 2
                        cnt -= 1
                        q.append((i, j))
            minutes += 1
        
        if cnt == 0:
            return minutes
        return -1