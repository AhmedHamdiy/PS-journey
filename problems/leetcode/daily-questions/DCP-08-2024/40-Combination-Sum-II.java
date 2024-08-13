class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(candidates);
        rec(result, new ArrayList<>(), candidates, target, 0, 0);
        return result;
    }

    private void rec(List<List<Integer>> result, List<Integer> path, int[] candidates, int target, int index, int sum) {
        if (sum == target) {
            result.add(new ArrayList<>(path));
            return;
        }

        for (int i = index; i < candidates.length; i++) {
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (sum + candidates[i] > target) break;
            path.add(candidates[i]);
            rec(result, path, candidates, target, i + 1, sum + candidates[i]);
            path.remove(path.size() - 1);
        }
    }
}