class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> res= new ArrayList<>();
        for(int i = 0;i < (1 << n); ++i){
            List<Integer> r= new ArrayList<>();
            for(int j = 0;j < n;++j)
                if((i & (1 << j))>0)
                    r.add(j+1);
            if(r.size()==k)
                res.add(r);
        }
        return res;
    }
}