public class Solution {
    public int UniquePaths(int m, int n) {
        int d=m+n-2;
        int r=m-1;
        double ans=1;
        for(int i=1;i<=r;i++)
            ans=ans*(d-r+i)/i;
        
        return (int)ans;
    }
}