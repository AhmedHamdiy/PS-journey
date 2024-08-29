public class Solution {
    public int MinDistance(string word1, string word2) {
        int m = word1.Length;
        int n = word2.Length;
        var dp = new int[m+1, n+1];
        for(var i = 0; i <= m; i++)
            dp[i, 0] = i;

        for(int j = 0; j <= n; j++)
            dp[0, j] = j;    

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(word1[i] == word2[j])
                    dp[i+1, j+1] = Math.Min(dp[i, j], 1+Math.Min(dp[i, j+1], dp[i+1, j]));
                else
                    dp[i+1, j+1] = Math.Min(dp[i, j], Math.Min(dp[i, j+1], dp[i+1, j])) + 1;

        return dp[m, n];
    }
}