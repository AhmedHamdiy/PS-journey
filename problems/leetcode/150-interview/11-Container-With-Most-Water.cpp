class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int leftBorder = 0;
        int rightBorder = n - 1;
        while (leftBorder < rightBorder) {
            ans = max(ans, (rightBorder - leftBorder) * min(height[leftBorder], height[rightBorder]));
            if (height[leftBorder] < height[rightBorder]) leftBorder++;
            else rightBorder--;
        }
        return ans;
    }
};