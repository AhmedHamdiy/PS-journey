class Solution {
    int[][] pre;
    int[] visited;
    private boolean depend(int c){
        if(visited[c] == 2) return true;
        if(visited[c] == 1) return false;
        int[] dependents = pre[c];
        visited[c] = 1;
        for(int i = 1; i <= dependents[0]; i++){
            if(!depend(dependents[i])) 
            return false;
        }
        visited[c] = 2;
        return true;
    }

    public boolean canFinish(int numCourses, int[][] prerequisites) {
        visited = new int[numCourses];
        pre = new int[numCourses][numCourses];
        for(int i = 0; i< prerequisites.length; i++){
            pre[prerequisites[i][0]][0] = pre[prerequisites[i][0]][0] + 1;
            int curCount = pre[prerequisites[i][0]][0];
            pre[prerequisites[i][0]][curCount] = prerequisites[i][1];
        }
        for(int i = 0; i< numCourses; i++){
            if(!depend(i)){
                return false;
            }
        }
        return true;
    }
}