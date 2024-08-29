public class Solution {
    public int NumTilings(int n) {
        int S0=1, S1=2, S2=5, mod=1000000007;
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 5;
        for(int i=4; i<=n; i++){
            int curr=((2*S2)%mod+S0);
            S0=S1%mod;
            S1=S2%mod;
            S2=curr%mod;
        }
        return S2%mod;
    }
}
