class Solution {
    public void helper(StringBuilder s,int i,int j,int n,List<String> l){
        if(s.length()==2*n){
            l.add(s.toString());
            return;
        }
        if(i<n){
            s.append('(');
            helper(s,i+1,j,n,l);
            s.deleteCharAt(s.length()-1);
        }
        if(j<n && i>j){
            s.append(')');
            helper(s,i,j+1,n,l);
            s.deleteCharAt(s.length()-1);
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> res=new ArrayList<>();
        StringBuilder s = new StringBuilder(\\);
        helper(s,0,0,n,res);
        return res;
    }
}