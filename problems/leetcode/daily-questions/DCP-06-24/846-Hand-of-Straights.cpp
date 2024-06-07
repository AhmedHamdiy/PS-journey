class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int h:hand){
            mp[h]++;
        }
        for(auto x:mp){
            if(x.second){
                for(int i=0;i<groupSize;i++){
                    if(mp.find((x.first)+i)==mp.end()||mp[(x.first)+i]<x.second)
                        return false;
                    else
                        mp[(x.first)+i]-=x.second;
                }
                x.second=0;
            }
        }
        return true;
    }
};