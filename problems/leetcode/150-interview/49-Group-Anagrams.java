class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>> mp=new HashMap<>();
        List<List<String>> res=new ArrayList<>() ;
        for(String str:strs){
            char[] chars =str.toCharArray();
            Arrays.sort(chars);
            String s=\\;
            s=s.copyValueOf(chars,0,chars.length);
            if(!mp.containsKey(s))
                mp.put(s,new ArrayList<String>());
                mp.get(s).add(str);               
        }
        mp.forEach((k,v)->{res.add(v);});
        return res;
    }
}