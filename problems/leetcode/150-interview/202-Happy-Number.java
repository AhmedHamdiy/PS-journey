class Solution {
    public boolean isHappy(int n) {
        while (n != 1 && n != 4) {
            int result = 0;
            while (n > 0) {
                int m = n % 10;
                n /= 10;
                result += Math.pow(m, 2);
            }
            n = result;
        }
    return n!=4;
    }
}