class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int prev=0,curr=1,n=nums.size();
    while(curr<n){
        if(nums[prev]==nums[curr]){
            if(curr-prev!=1){
                nums[curr]= 10001;
            }
        }
        else 
            prev=curr;
        curr++;
    }
    sort(nums.begin(),nums.end());
    auto pos=lower_bound(nums.begin(),nums.end(), 10001);
    nums.erase(pos,nums.end());
    return nums.size();
    }
};