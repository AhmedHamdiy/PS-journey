class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(52,0);
        int index=0,ans=0;
        for(char c: s){
            index=c-'a';
            if(index>=0)
                freq[index]++;
            else
                freq[index+58]++;
        }
        index=0;
        for(int cnt:freq){
            if(cnt%2){
                index=max(index,cnt);
                ans+=cnt-1;
                }
            else
                ans+=cnt;
        }
        return (index==0)?ans:(ans+1);
    }
};