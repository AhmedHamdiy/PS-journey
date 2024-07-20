class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> mat(rowSum.size(),vector<int>(colSum.size()));
        for (int i = 0; i < rowSum.size(); i++) {
            for (int j = 0 ; j < colSum.size(); j++) {
                mat[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= mat[i][j];
                colSum[j] -= mat[i][j];
            }
        }
        return mat;
    }
};