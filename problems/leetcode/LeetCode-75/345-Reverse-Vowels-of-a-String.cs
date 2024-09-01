public class Solution {
    public string ReverseVowels(string s) {
        var chars = s.ToList();
        var templates = new List<char>{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'O', 'U', 'I'};
        var vowels = new List<char>();
        var numerOfVowels = 0;

        for (var i = 0; i < chars.Count; i++) {
            if (templates.Contains(chars[i])) {
                vowels.Add(chars[i]);
                numerOfVowels++;
            }            
        }

        for (var i = 0; i < chars.Count; i++) {
            if (templates.Contains(chars[i])) {
                chars[i] = vowels[numerOfVowels - 1];
                numerOfVowels--;
            }
        }
        return new string(chars.ToArray());
    }
}