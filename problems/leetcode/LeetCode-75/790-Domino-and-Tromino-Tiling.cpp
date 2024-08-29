class Solution {
public:
        int numTilings(int n) {
           int state1=1, state2=2, state3=5, Mod=1e9+7;
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 5;
        for(int i=4; i<=n; i++){
            int curr=((2*(state3%Mod))%Mod+state1%Mod)%Mod;
            state1=state2%Mod;
            state2=state3%Mod;
            state3=curr%Mod;
        }
        return state3%Mod;
    }
};