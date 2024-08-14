class Solution {
    public double[] calcEquation(List<List<String>> equations, double[] values, List<List<String>> queries) {
       HashMap<String,ArrayList<Pair>> map = new HashMap<>();
       for(int i = 0;i<equations.size();i++){
           String fr = equations.get(i).get(0);
           String to = equations.get(i).get(1);
           double val = values[i];
           if(!map.containsKey(fr)) map.put(fr,new ArrayList<>());
           if(!map.containsKey(to)) map.put(to,new ArrayList<>());
           Pair fp = new Pair(to,val);
           Pair tp = new Pair(fr,1.0/val);
           map.get(fr).add(fp);
           map.get(to).add(tp);
       }
       double[] ret  =new double[queries.size()];
       for(int i = 0;i<ret.length;i++){
           String cf = queries.get(i).get(0);
           String ct = queries.get(i).get(1);
           if(!map.containsKey(cf) || !map.containsKey(ct)){
                ret[i]=-1;continue;
            }
           ret[i] = bfs(map,cf,ct);
       }
        return ret;
    }

    double bfs(HashMap<String,ArrayList<Pair>> map,String from,String to){
        HashSet<String> vis= new HashSet<>();
        Queue<Pair> q = new LinkedList<>();
        q.offer(new Pair(from,1.0));
        while(!q.isEmpty()){
            Pair cur = q.poll();
            if(cur.node.equals(to)) return cur.val;
            vis.add(cur.node);
            for(Pair ad:map.get(cur.node)){
                if(!vis.contains(ad.node)){
                    q.offer(new Pair(ad.node,cur.val*ad.val));
                }
            }
        }
        return -1.0;
    }
}
class Pair{
    String node;
    double val;
    Pair(String node,double val){
        this.node = node;
        this.val=val;
    }
}