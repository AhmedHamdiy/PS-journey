class Solution {
    public:
        //This Solution is not the optimized one, I thimk trie would be more efficient.
        string replaceWords(vector<string>& dictionary, string sentence) {
            vector<string> words;
            unordered_set<string>roots (dictionary.begin(), dictionary.end());
            string ans = "";
            for(char c: sentence){
                if(c==' '){
                    words.push_back(ans);
                    ans="";
                }
                else
                    ans+=c;
            }
            words.push_back(ans);
            ans="";
            for (string word:words) {
                string foundRoot = "";
                for (int i = 1; i <= word.size(); ++i) {
                string prefix = word.substr(0, i);
                if (roots.count(prefix)) {
                    foundRoot = prefix;
                    break; 
                }
                }
                ans += (foundRoot.empty() ? word : foundRoot) + " ";
            }
            ans.pop_back();
            return ans;
        }
};