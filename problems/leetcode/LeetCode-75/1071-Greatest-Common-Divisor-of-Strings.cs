public class Solution {
    public string GcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1)
            return "";
        int n=str1.Length,m=str2.Length;
        while(n!=0&&m!=0){
           if (n > m){
                n %= m;
            } 
            else {
                m %= n;
            }
        }

        int l= n | m;
        return str1.Substring(0,l);
    }
}