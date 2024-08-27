public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        int[] chars = new int[26];
        char[] ch = new char[ransomNote.Length];  
    
        for (int i = 0; i < ransomNote.Length; i++) {  
            ch[i] = ransomNote[i];  
        }  
    
        foreach (char c in ransomNote) {
            int i = magazine.IndexOf(c, chars[c % 26]);
            if (i == -1) return false;
            chars[c % 26] = i + 1;
        }
        return true;
    }
}