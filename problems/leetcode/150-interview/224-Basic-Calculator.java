class Solution {
    public int calculate(String s) {
        Stack<Integer> stack = new Stack<>();
        int sign = 1, num = 0, res = 0;
        for(int i = 0; i < s.length(); ++i) {
            char c = s.charAt(i);
            if(Character.isDigit(c)){
                num = 10 * num + c - '0';
            } 
            else if(c == '+'){
                res += sign * num;
                num = 0;
                sign = 1;
            } 
            else if(c == '-'){
                res += sign * num;
                num = 0;
                sign = -1;
            } 
            else if(c == '('){
                stack.push(res);
                stack.push(sign);
                res = 0;
                sign = 1;
            } 
            else if(c == ')'){
                res += sign * num;
                res *= stack.pop();
                res += stack.pop();
                num = 0;
            }
        }

        if(num != 0)
            res += sign * num;

        return res;
    }
}