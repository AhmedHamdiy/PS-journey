public class Solution {
    public int Tribonacci(int n) {
        if(n==0)
            return 0;
        if(n<=2)
            return 1;
        int T0=0,T1=1,T2=1;
        for(int i=2;i<n;i++){
            int tmp=T2;
            T2+=T0+T1;
            T0=T1;
            T1=tmp;
        }   
        return T2;
    }
}