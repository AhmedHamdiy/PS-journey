public class Solution {
    public int[][] Construct2DArray(int[] original, int m, int n) {
        if(original.Length!=m*n)
            return [];
        int[][] res=new int[m][];
        for(int i=0;i<m;i++)
            res[i]=new int[n];
        int k=0; 
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                res[i][j]=original[k++];
            return res;
    }
}