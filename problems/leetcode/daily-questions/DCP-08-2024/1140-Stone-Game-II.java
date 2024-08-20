class Solution {
    public int stoneGameII(int[] piles) {
        int n = piles.length;
        int[] prefixSum = new int[n];
        prefixSum[n - 1] = piles[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            prefixSum[i] = prefixSum[i + 1] + piles[i];
        }
        int[][] dp = new int[n][n];
        for (int[] v : dp) 
            Arrays.fill(v, -1);
        return dfs(piles, prefixSum, dp, 0, 1);
    }
     private int dfs(int[] piles, int[] prefixSum, int[][] dp, int i, int M) {
        if (i == piles.length)
            return 0;
        
        if (2 * M >= piles.length - i)
            return prefixSum[i];
        
        if (dp[i][M] != -1) 
            return dp[i][M];
        
        int maxStones = 0;
        for (int x = 1; x <= 2 * M; x++)
            maxStones = Math.max(maxStones, prefixSum[i] - dfs(piles, prefixSum, dp, i + x, Math.max(M, x)));
        
        dp[i][M] = maxStones;
        return maxStones;
    }
}