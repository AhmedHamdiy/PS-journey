class Solution {
    public int minDays(int[][] grid) {
     if (islands(grid) != 1) return 0;
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    if (islands(grid) != 1) return 1;
                    grid[i][j] = 1;
                }
            }
        }
        return 2;   
    }
      private int islands(int[][] grid) {
        boolean[][] visited = new boolean[grid.length][grid[0].length];
        int cnt = 0;
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] == 1 && !visited[i][j]) {
                    cnt++;
                    dfs(grid, i, j, visited);
                }
            }
        }
        return cnt;
    }

    private void dfs(int[][] grid, int r, int c, boolean[][] visited) {
        visited[r][c] = true;
        int[][] directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (int[] dir : directions) {
            int x = r + dir[0], y = c + dir[1];
            if (x >= 0 && x < grid.length && y >= 0 && y < grid[0].length && grid[x][y] == 1 && !visited[x][y]) {
                dfs(grid, x, y, visited);
            }
        }
    }
}