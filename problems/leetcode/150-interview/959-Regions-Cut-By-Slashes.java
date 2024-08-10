class Solution {
    public int regionsBySlashes(String[] grid) {
        int m = grid.length;
        int[][] matrix = new int[m * 3][m * 3];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                if(grid[i].charAt(j) == '/'){
                    matrix[i * 3][j * 3 + 2] = 1;
                    matrix[i * 3 + 1][j * 3 + 1] = 1;
                    matrix[i * 3 + 2][j * 3] = 1;
                }
                if(grid[i].charAt(j) == '\\'){
                    matrix[i * 3][j * 3] = 1;
                    matrix[i * 3 + 1][j * 3 + 1] = 1;
                    matrix[i * 3 + 2][j * 3 + 2] = 1;
                }
            }
        }
        int count = 0;
        int[][] directions = new int[][]{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        boolean[][] visited = new boolean[m * 3][m * 3];
        for(int i = 0; i < m * 3; i++){
            for(int j = 0; j < m * 3; j++){
                if(matrix[i][j] == 0 && !visited[i][j]){
                    helper(i, j, matrix, directions, visited);
                    count++;
                }
            }
        }
        return count;
    }   
    private void helper(int x, int y, int[][] matrix, int[][] directions, boolean[][] visited){
        if(visited[x][y]){
            return;
        }
        visited[x][y] = true;
        for(int[] dir : directions){
            int next_x = dir[0] + x;
            int next_y = dir[1] + y;
            if(next_x >= 0 && next_x < matrix.length && next_y >= 0 && next_y < matrix[0].length && matrix[next_x][next_y] == 0){
                helper(next_x, next_y, matrix, directions, visited);
            }
        }
    }
}