public class Solution {
    public int MinCostClimbingStairs(int[] cost) {
        int n= cost.Length;
        int[] dp= new int[n+1];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
            dp[i]=Math.Min(dp[i-1],dp[i-2])+cost[i];
        return Math.Min(dp[n-1],dp[n-2]);
    }
}