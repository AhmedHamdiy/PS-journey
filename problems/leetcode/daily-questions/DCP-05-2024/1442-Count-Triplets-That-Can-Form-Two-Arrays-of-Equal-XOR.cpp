class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0;
        for (int i = 0; i < arr.size() - 1; i++) {
            int first = 0; 
            for (int j = i + 1; j < arr.size(); j++) {
                first ^= arr[j - 1]; 
                int second = 0; 
                for (int k = j; k < arr.size(); k++) {
                    second ^= arr[k]; 
                    if (second == first) { 
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};