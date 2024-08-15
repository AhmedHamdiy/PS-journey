class Solution {
    public int minMutation(String startGene, String endGene, String[] bank) {
        Set<String> st = new HashSet<>(Arrays.asList(bank));
        Queue<String> q = new LinkedList<>();
        q.offer(startGene);
        int ans = 1;
        while (!q.isEmpty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                String gene = q.poll();
                Iterator<String> it = st.iterator();
                while (it.hasNext()) {
                    String b = it.next();
                    int diff = 0;
                    for (int j = 0; j < 8 && diff < 2; j++) {
                        if (gene.charAt(j) != b.charAt(j)) {
                            diff++;
                        }
                    }
                    if (diff == 1) {
                        if (b.equals(endGene)) {
                            return ans;
                        }
                        q.offer(b);
                        it.remove();
                    }
                }
            }
            ans++;
        }
        return -1;
    }
}