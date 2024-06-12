class Solution {
public:
    void sortColors(vector<int>& nums) {
     int colors[3]={0,0,0};
     int j=0;
     for(int x: nums){
        colors[x]++;
     }
     for(int i =0;i<3;i++){
        int x=0;
        while(x<colors[i]){
            nums[j++]=i;
            x++;
        }
     }
    }
};