// Approach - 2

class Solution {
    public int totalNQueens(int n) {
        char[][] board = new char[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = '.';
            }
        }

        int[] l = new int[n];
        int[] DD = new int[2 * n - 1];
        int[] UD = new int[2 * n - 1];

        return solve(0, board, l, DD, UD);
    }

    int solve(int x, char[][] board, int[] l, int[] DD, int[] UD) {
        if (x == board.length) {
            return 1;
        }

        int cnt = 0;
        for (int y = 0; y < board.length; y++) {
            if (l[y] == 0 && DD[y + x] == 0 && UD[board.length - 1 + x - y] == 0) {
                l[y] = 1;
                DD[y + x] = 1;
                UD[board.length - 1 + x - y] = 1;
                board[y][x] = 'Q';
                cnt += solve(x + 1, board, l, DD, UD);
                board[y][x] = '.';
                l[y] = 0;
                DD[y + x] = 0;
                UD[board.length - 1 + x - y] = 0;
            }
        }
        return cnt;
    }
}