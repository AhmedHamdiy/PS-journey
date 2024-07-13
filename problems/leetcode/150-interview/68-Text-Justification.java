class Solution {
    public List<String> fullJustify(String[] words, int maxWidth) {
        List<String> res = new ArrayList<>();
        List<String> cur = new ArrayList<>();
        int cnt = 0;

        for (String word : words) {
            if (word.length() + cur.size() + cnt > maxWidth) {
                for (int i = 0; i < maxWidth - cnt; i++) {
                    cur.set(i % (cur.size() - 1 > 0 ? cur.size() - 1 : 1), cur.get(i % (cur.size() - 1 > 0 ? cur.size() - 1 : 1)) + \ \);
                }
                StringBuilder sb = new StringBuilder();
                for (String s : cur) sb.append(s);
                res.add(sb.toString());
                cur.clear();
                cnt = 0;
            }
            cur.add(word);
            cnt += word.length();
        }

        StringBuilder lastLine = new StringBuilder();
        for (int i = 0; i < cur.size(); i++) {
            lastLine.append(cur.get(i));
            if (i != cur.size() - 1) lastLine.append(\ \);
        }
        while (lastLine.length() < maxWidth) lastLine.append(\ \);
        res.add(lastLine.toString());

        return res;
    }
}