class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<>();
        find(res, new ArrayList<>(), candidates, target, 0);
        return res;
    }

    void find(List<List<Integer>> res, List<Integer> temp, int[] nums, int target, int st) {
        if (target < 0)
            return;
        if (target == 0)
            res.add(new ArrayList<>(temp));
        else
            for (int i = st; i < nums.length; i++) {
                temp.add(nums[i]); 
                find(res, temp, nums, target - nums[i], i); 
                temp.remove(temp.size() - 1); 
            }
    }
}