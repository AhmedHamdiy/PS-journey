class Solution {
    public long maxPoints(int[][] points) {
        int x=points.length, y=points[0].length;
        long[] dp = new long[y];

        for (int j = 0; j < y; j++) {
            dp[j] = points[0][j];
        }

        for(int i=1; i<x; i++) {
            long l[] = new long[y];
            long r[] = new long[y];
            long a[] = new long[y];

            l[0] = dp[0];
            for(int j=1; j<y; j++) {
                l[j] =  Math.max(l[j-1] - 1 , dp[j]);
            }

            r[y-1] = dp[y-1];
            for(int j=y-2; j>=0; j--) {
                r[j] = Math.max(r[j+1] - 1 , dp[j]);
            }

            for(int j=0; j<y; j++) {
                a[j] = Math.max(l[j], r[j]) + points[i][j];
            }

            dp = a;
        }
        long mx = 0;
        for(long i : dp) mx = Math.max(mx, i);
        return mx;
    }
}