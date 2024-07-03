class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())
            return false;
        char[] sChar=s.toCharArray();
        char[] tChar=t.toCharArray();
        Arrays.sort(tChar);
        Arrays.sort(sChar);
        for(int i=0;i<tChar.length;i++)
            if(sChar[i]!=tChar[i])
                return false;
        return true;
    }
}