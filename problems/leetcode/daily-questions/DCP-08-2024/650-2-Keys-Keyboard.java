class Solution {
    public int minSteps(int n) {
        int curr = 1;
        int prev = 0;
        int ans = 0;
        while(curr < n){
            if(n%curr == 0){
                prev = curr;
                curr += prev;
                ans += 2;
            }
            else{
                curr += prev; 
                ans++;
            }
        }
        
        return ans;
    }
}