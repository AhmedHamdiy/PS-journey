class Solution {
    public String nearestPalindromic(String n) {
        int len = n.length();
        if (len == 1) {
            return String.valueOf(Integer.parseInt(n) - 1);
        }

        List<Long> l = new ArrayList<>();
        
        l.add((long) Math.pow(10, len - 1) - 1); 
        l.add((long) Math.pow(10, len) + 1);  
        long prefix = Long.parseLong(n.substring(0, (len + 1) / 2));
        
        for (int i = -1; i <= 1; ++i) {
            String tmp = String.valueOf(prefix + i);  
            String s = tmp + new StringBuilder(tmp).reverse().substring(len % 2); 
            l.add(Long.parseLong(s));
        }

        long num = Long.parseLong(n);
        long ans = -1;

        for (long e : l) {
            if (e == num) continue;
            if (ans == -1 ||
                Math.abs(e - num) < Math.abs(ans - num) ||  
                (Math.abs(e - num) == Math.abs(ans - num) && e < ans)) {  
                ans = e;
            }
        }

        return String.valueOf(ans); 
    }
}