class Solution {
    public int strangePrinter(String s) {
        int n = s.length();
        int[][] dp = new int[n][n];
        for (int len = 1; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;
                dp[i][j] = len; 
                for (int k = i; k < j; k++) {
                    int x = dp[i][k] + dp[k + 1][j];
                    if (s.charAt(k) == s.charAt(j)) {
                        x--;
                    }
                    dp[i][j] = Math.min(dp[i][j], x);
                }
            }
        }
        return dp[0][n - 1];
    }
}