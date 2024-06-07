class Solution {
public:
    int specialArray(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int ans=-1;
      int n=nums.size();
      int max=*max_element(nums.begin(),nums.end());
      auto it=nums.begin();
      for(int i =0; i<max+1;i++){
        it=lower_bound(it, nums.end(), i);
        if(nums.end()-it==i)
            ans=i;
      }
      return ans;
    }
};