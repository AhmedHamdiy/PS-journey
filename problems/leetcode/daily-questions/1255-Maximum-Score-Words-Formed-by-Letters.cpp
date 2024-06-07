class Solution {
private:
    void rec(int i, vector<string>& words,vector<int>& score,vector<int>& freq,
    vector<int>& newFreq, int &ans){
        if(i==words.size()){
            int tmp=0;
            for(int j=0;j<freq.size();j++){
                if(newFreq[j]>freq[j]) return;
                tmp+=score[j]*newFreq[j];
            }
            ans=max(ans,tmp);
            return;
        }

        rec(i+1,words,score,freq,newFreq,ans);
        for(auto letter : words[i])
        newFreq[letter-'a']++;

        rec(i+1,words,score,freq,newFreq,ans);
        for(auto letter : words[i])
        newFreq[letter-'a']--;
    }
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26,0),newFreq(26,0);
        int ans=0;
        for(auto letter : letters)
            freq[letter-'a']++;
        rec(0,words,score, freq,newFreq,ans);
        return ans;
    }
};