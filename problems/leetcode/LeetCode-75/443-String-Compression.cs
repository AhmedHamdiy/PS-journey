public class Solution {
    public int Compress(char[] chars) {
           int idx=0;
      int i=0;
      while(i<chars.Length){
        int count=0;
        char c = chars[i];
        while(i<chars.Length && chars[i]==c){
            i++;
            count++;
        }
        chars[idx++] = c;
        if(count>1){
            foreach(char digit in count.ToString()){
                chars[idx++] = digit;
            }
        }
      }
    return idx;
    }
}