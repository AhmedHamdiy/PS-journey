class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans = 0;
        vector<pair<int, int>> jp;
        jp.push_back({0, 0});
        for (int i = 0; i < difficulty.size(); i++) {
            jp.push_back({difficulty[i], profit[i]});
        }
        sort(jp.begin(), jp.end());
        for (int i = 0; i < jp.size() - 1; i++) {
            jp[i + 1].second = max(jp[i].second, jp[i + 1].second);
        }
        for (int w: worker) {
            int l = 0, r = jp.size() - 1, profit = 0;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (jp[mid].first <= w) {
                    profit = max(profit, jp[mid].second);
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            ans += profit;
        }
        return ans;        
    }
};