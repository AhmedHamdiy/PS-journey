class Solution {
    public int nthUglyNumber(int n) {
        int[] primes = {2, 3, 5};
        PriorityQueue<Long> q = new PriorityQueue<>();
        HashSet<Long> s = new HashSet<>(); 
        q.add(1L);
        s.add(1L);
        long num = 1L;
        for (int i = 0; i < n; i++) {
            num = q.poll();
            for (int prime : primes) {
                long x = num * prime;
                if (!s.contains(x)) {
                    q.add(x);
                    s.add(x);
                }
            }
        }
        return (int)num;
    }
}