class Solution {
    public String simplifyPath(String path) {
        StringBuilder sb = new StringBuilder();  
        Stack<String> st = new Stack<>();     
        for (int i = 0; i < path.length() + 1; ++i) {  
            if ((i == path.length() || path.charAt(i) == '/') && sb.length() > 0) {  
                 String directory = sb.toString();  
                if (directory.equals(\..\) && !st.isEmpty())  
                    st.pop();
                else if (!directory.equals(\..\) && !directory.equals(\.\))  
                    st.push(directory);
                sb.setLength(0);  
            } else if (i < path.length() && path.charAt(i) != '/') {
                sb.append(path.charAt(i));  
            }
        }

        String res = \\;
        while (!st.isEmpty())
            res = \/\ + st.pop() + res;  

        return res.length() == 0 ? \/\ : res; 
    }
}