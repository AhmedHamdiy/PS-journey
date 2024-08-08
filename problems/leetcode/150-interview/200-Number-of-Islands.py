class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m, n, ans = len(grid), len(grid[0]), 0
        moves = [[0,1],[1,0],[0,-1],[-1,0]]
        visited = set()

        def bfs(i, j):
            q = deque()
            q.append([i,j])
            visited.add((i,j))
            while q:
                x , y =q.popleft()
                for Xmove, Ymove in moves:
                    x1,y1 = x+ Xmove, y+ Ymove
                    if 0<=x1<m and 0<=y1<n and grid[x1][y1] == '1' and (x1,y1) not in visited:
                        q.append((x1,y1))
                        visited.add((x1,y1))

        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1'and (i,j) not in visited:
                    ans+=1
                    bfs(i,j)
        return ans