class Solution {
    public boolean isValid(String s) {
        Stack<Character> st=new Stack<>();
        for(int i=0; i<s.length();i++){
            if(s.charAt(i)=='['||s.charAt(i)=='('||s.charAt(i)=='{')
                st.push(s.charAt(i));
            else if (s.charAt(i)==']')
                if(st.isEmpty()||st.peek()!='[')
                    return false;
                else 
                    st.pop();
            else if (s.charAt(i)=='}')
                if(st.isEmpty()||st.peek()!='{')
                    return false;
                else 
                    st.pop();
            else if (s.charAt(i)==')')
                if(st.isEmpty()||st.peek()!='(')
                    return false;
                else 
                    st.pop();
        }
        return st.isEmpty();
    }
}