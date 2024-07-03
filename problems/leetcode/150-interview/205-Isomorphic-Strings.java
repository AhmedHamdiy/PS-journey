class Solution {
    public boolean isIsomorphic(String s, String t) {
        int mp1[]=new int[200];
        int mp2[]=new int[200];
        if(s.length()!=t.length())
            return false;

        for(int i=0;i<s.length();i++)
        {
            if(mp1[s.charAt(i)]!=mp2[t.charAt(i)])
                return false;
            mp1[s.charAt(i)]=i+1;
            mp2[t.charAt(i)]=i+1;
        }
        return true;
    }
}