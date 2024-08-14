class Solution {
    public int snakesAndLadders(int[][] board) {
        int n = board.length;
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[]{1,0});
        Set<Integer> s = new HashSet<>();
        s.add(1);
        while(!q.isEmpty()){
            int[] arr = q.poll();
            int index = arr[0];
            if(index>=n*n){
                return arr[1];
            }
            for(int idx=index+1; idx <= (Math.min(index+6, n*n)); idx++){   
                int _q = (idx-1) / n;
                int rem = (idx-1) % n;
                int x = (n-1)-(_q);
                int y = _q%2==0 ? rem : (n-1)-rem;        
                int next = board[x][y] != -1 ? board[x][y] : idx;
                if(s.contains(next))
                        continue;
                s.add(next);
                q.add(new int[]{next, arr[1]+1});
            }
        }       
        return -1;
    }
}