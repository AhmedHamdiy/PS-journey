public class Solution {
    public string ReverseWords(string s) {
        string reverse = \\;
        var words = s.Trim().Split(' ');
        foreach (var word in words){
            if (word.Length!=0)
                reverse = word + \ \ + reverse;
        }
        return reverse.Trim();  
    }
}