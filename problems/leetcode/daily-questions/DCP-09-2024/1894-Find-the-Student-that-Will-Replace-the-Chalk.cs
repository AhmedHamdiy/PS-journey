public class Solution {
    public string MergeAlternately(string word1, string word2) {
        string s=\\;
        int i=0,j=0,n=word1.Length,m=word2.Length;
        while(i<n&&j<m){
            s= s+word1.Substring(i,1)+word2.Substring(j,1);
            i++;
            j++;
        }
        while(i<n){
            s= s+word1.Substring(i,1);
            i++;
        }
        while(j<m){
            s= s+word2.Substring(j,1);
            j++;
        }
        return s;
    }
}