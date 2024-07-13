class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<pair<pair<int,int>,char>> robo;
        vector<int>result;
        for(int i=0;i<n;i++){
            robo.push_back({{positions[i],healths[i]},directions[i]});
        }
        sort(robo.begin(),robo.end());
        stack<pair<pair<int,int>,char>>st;
        for(int i=0;i<n;i++){
            if(st.empty() || st.top().second=='L' || robo[i].second=='R'){
                st.push(robo[i]);
            }else{
                while(!st.empty() && st.top().second=='R' && robo[i].second=='L'){
                    auto p = st.top(); 
                    if(robo[i].first.second>p.first.second){
                        st.pop();
                        robo[i].first.second--;
                    }else if(robo[i].first.second==p.first.second){
                        st.pop();
                        robo[i].first.second = -1;
                        break;
                    }else{
                        st.pop();
                        p.first.second--;
                        st.push(p);
                        robo[i].first.second = -1;
                        break;
                    }
                }
                if (robo[i].first.second > 0) {
                    st.push(robo[i]);
                }
            }
        }
        map<int,int>freq;
        while(!st.empty()){
            auto p = st.top();
            st.pop();
            freq[p.first.first]=p.first.second;
        }
        for(int i=0;i<n;i++){
            if(freq.find(positions[i])!=freq.end()){
                result.push_back(freq[positions[i]]);
            }            
        }
        return result;
    }
};