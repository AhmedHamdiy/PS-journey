class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int sum = 0;
        int cur = 0;
        int start = 0;
        for (int i = 0; i < gas.length; i++) {
            int total = gas[i] - cost[i];
            sum += total;
            cur += total;
            if (cur < 0) {
                start = i + 1;
                cur = 0;
            }
        }
        return sum < 0 ? -1 : start;
    }
}