class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i!=-1){
            int tmp=nums[i];
            nums[i]=0;
            i+=tmp;
            if(i>=n-1)
                return true;
            else if (nums[i]==0)
                i--;
        }
        return false;
    }
};