class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>mp= new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int t = target - nums[i];
            if (mp.containsKey(t)) {
                return new int[]{mp.get(t), i};
            }
            mp.put(nums[i], i);
        }

        return new int[]{};
    }
}