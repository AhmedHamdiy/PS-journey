class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> mp;
    for (int num : arr1) {
        mp[num]++;
    }
    vector<int> ans;
    for (int num : arr2) {
        while (mp[num] > 0) {
            ans.push_back(num);
            mp[num]--;
        }
    }
    vector<int> rest;
    for (const auto& [num, cnt] : mp) {
        for (int i = 0; i < cnt; ++i) {
            rest.push_back(num);
        }
    }
    sort(rest.begin(), rest.end());
    ans.insert(ans.end(), rest.begin(), rest.end());
    return ans;
    }
};