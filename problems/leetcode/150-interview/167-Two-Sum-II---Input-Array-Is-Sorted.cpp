class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int total = numbers[left] + numbers[right];

            if (total == target) {
                break;
            } else if (total > target) {
                right--;
            } else {
                left++;
            }
        }
        return {left + 1, right + 1};  
    }
};