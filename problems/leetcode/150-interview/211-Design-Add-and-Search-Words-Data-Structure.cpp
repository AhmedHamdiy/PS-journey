class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val){
        this->data = val;
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }
};

class WordDictionary {
public:
    TrieNode *root;
    WordDictionary() {
        root = new TrieNode('\0');
    }

     void insertWord(TrieNode *root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return ;
        }
        int idx= word[0]-'a';
        TrieNode *child=NULL;
        if(root->children[idx]==NULL){
            child = new TrieNode(word[0]);
            root->children[idx]=child;
        }
        else{
            child= root->children[idx];
        }
        insertWord(child,word.substr(1));
    }
    
    void addWord(string word) {
        insertWord(root,word);
    }
    bool searchWord(TrieNode *root , string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        if(word[0]=='.'){
            for(int i=0; i< 26; i++){
                if(root->children[i]!=NULL && searchWord(root->children[i],word.substr(1))){
                    return true;
                }
            }
        }
        else{
        int idx = word[0]-'a';
        TrieNode *child=NULL;
        if(root->children[idx]==NULL){
            return false;
        }
        else{
            child = root->children[idx];
        }
        return searchWord(child ,word.substr(1));
        }
        return false;   
    }
    bool search(string word) {
        return searchWord(root,word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */