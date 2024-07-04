class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> ans = new ArrayList<>();
        boolean inserted = false; 
        for (int i = 0; i < intervals.length; i++){
            if (newInterval[0] >  intervals[i][1]){ 
                ans.add(intervals[i]);
            } 
            else if (newInterval[1] <  intervals[i][0]){
                if (!inserted) {
                    ans.add(newInterval);
                    inserted = true;
                }
                ans.add(new int[]{ intervals[i][0],  intervals[i][1]});
            } 
            else{ 
                newInterval[0] = Math.min( intervals[i][0], newInterval[0]);
                newInterval[1] = Math.max( intervals[i][1], newInterval[1]);
            }
        }
        if (!inserted)
            ans.add(newInterval);
        return ans.toArray(new int[ans.size()][]);
    }
}
