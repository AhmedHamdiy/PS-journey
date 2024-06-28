struct Node{
map<char,Node*> children;
bool isWord;
Node(){
    isWord=false;
}
};
class Trie {
private:
Node* root;
public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* tmpPtr=root;
        int i=0;
        while(i<word.size()){
            if(tmpPtr->children.find(word[i])==tmpPtr->children.end()){
                Node* newChild= new Node();
                tmpPtr->children.insert({word[i],newChild});
                tmpPtr=newChild;
            }
            else{
                    tmpPtr=tmpPtr->children[word[i]];
            }
            i++;
        }
        tmpPtr->isWord=true;
    }
    
    bool search(string word) {
        Node* tmpPtr=root;
        int i=0;
        while(i<word.size()){
            if(tmpPtr->children.find(word[i])==tmpPtr->children.end()){
                return false;
            }
            else{
                    tmpPtr=tmpPtr->children[word[i]];
            }
            i++;
        }
        return tmpPtr->isWord==true;
    }
    
    bool startsWith(string prefix) {
        Node* tmpPtr=root;
        int i=0;
        while(i<prefix.size()){
            if(tmpPtr->children.find(prefix[i])==tmpPtr->children.end()){
                return false;
            }
            else{
                    tmpPtr=tmpPtr->children[prefix[i]];
            }
            i++;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */