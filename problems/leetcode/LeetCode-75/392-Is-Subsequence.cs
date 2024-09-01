public class Solution {
    public bool IsSubsequence(string s, string t) {
     int i=0,j=0,n=s.Length,m=t.Length;
     if(n>m)
        return false;
    for(;i<n&&j<m;j++){
        if(t[j]==s[i])
            i++;
    } 
    return (i==n);

    }
}