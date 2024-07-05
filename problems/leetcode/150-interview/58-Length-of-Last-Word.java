class Solution {
    public int lengthOfLastWord(String s) {
        String[] res = s.split(\\\s\);
        return res[res.length-1].length();
    }
}