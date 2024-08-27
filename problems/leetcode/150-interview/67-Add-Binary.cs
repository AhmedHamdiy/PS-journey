public class Solution {
    public string AddBinary(string a, string b) {
        int carry = 0;
        int i = a.Length - 1;
        int j = b.Length - 1;
        string result = \\;
        while (i >= 0 || j >= 0 || carry == 1){
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';
            result += (carry % 2).ToString();
            carry /= 2;
        }
        return new string(result.Reverse().ToArray());
    }
}