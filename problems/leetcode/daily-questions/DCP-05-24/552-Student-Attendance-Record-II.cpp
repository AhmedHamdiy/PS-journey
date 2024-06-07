class Solution {
public:
    const long long mod=1e9+7;
    int checkRecord(int n) {
        int dp[2][2][3]={0};
        fill(&dp[0][0][0], &dp[0][0][0]+6, 1);
        for(int i=1; i<=n; i++){
            for(int j=0; j<=1; j++){
                for(int k=0; k<=2; k++){
                    long long ans=dp[(i-1)%2][j][0];//P
                    ans+=(k<2?dp[(i-1)%2][j][k+1]:0);//L
                    ans+=(j==0?dp[(i-1)%2][j+1][0]:0);// A
                    dp[i%2][j][k]=ans%mod;
                }
            }
        }
        
        return dp[n%2][0][0];
    }
};