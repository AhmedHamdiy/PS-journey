class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        for(auto edge:edges){
            mp[edge[0]]++;
            mp[edge[1]]++;
        }
        int maxF=-1,maxI=-1;
        for(auto e:mp){
            if(e.second>maxF){
                maxI=e.first;
                maxF=e.second;
            }
        }
        return maxI;
    }
};