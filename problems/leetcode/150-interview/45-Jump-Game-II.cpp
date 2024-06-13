class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0,steps=0,n=nums.size();
        for(int j=1;j<n;j++)
            nums[j]=max(nums[j-1],nums[j]+j);
        while(i<n-1){
            steps++;
            i=nums[i];
        }
        return steps;
    }
};