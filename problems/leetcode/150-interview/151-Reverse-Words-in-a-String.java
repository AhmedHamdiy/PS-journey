class Solution {
    public String reverseWords(String s) {
        String[] str = s.trim().split(\\\\\s+\);
        String res = \\;
        for (int i = str.length - 1; i > 0; i--) {
            res += str[i] + \ \;
        }
        return res + str[0];
    }
}