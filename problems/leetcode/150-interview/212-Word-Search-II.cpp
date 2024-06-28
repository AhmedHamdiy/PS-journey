class Solution {
    struct node {
        unordered_map<char, node*> next;
        vector<string> s;
    };
    void searchHelper(vector<vector<char> >& board, int i, int j, node* t, unordered_set<string>& a) {
        for(string s: t->s) a.insert(s);
        char c = board[i][j];
        board[i][j] = 0;
        if(i > 0){
            if(t->next.find(board[i - 1][j]) != t->next.end()) {
                searchHelper(board, i - 1, j, t->next[board[i - 1][j]], a);
            }
        }
        if(i < board.size() - 1) {
            if(t->next.find(board[i + 1][j]) != t->next.end()) {
                searchHelper(board, i + 1, j, t->next[board[i + 1][j]], a);
            }
        }
        if(j > 0) {
            if(t->next.find(board[i][j - 1]) != t->next.end()) {
                searchHelper(board, i, j - 1, t->next[board[i][j - 1]], a);
            }
        }
        if(j < board[0].size() - 1) {
            if(t->next.find(board[i][j + 1]) != t->next.end()) {
                searchHelper(board, i, j + 1, t->next[board[i][j + 1]], a);
            }
        }
        board[i][j] = c;
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        unordered_set<string> a;
        vector<string> ans;
        node* t = new node();
        node* x;
        for(string s: words) {
            x = t;
            for(char c : s) {
                if(x->next.find(c) == x->next.end()) {
                    x->next.insert({c, new node()});
                }
                x = x->next[c];
            }
            x->s.push_back(s);
        }
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(t->next.find(board[i][j]) != t->next.end()) {
                    searchHelper(board, i, j, t->next[board[i][j]], a);
                }
            }
        }
        for(string s: a) {
            ans.push_back(s);
        }
        return ans;
    }
};