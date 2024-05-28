class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        vector<int> diff(n,0);
        for(int i=0;i<n;i++)
            diff[i]=abs((int)s[i]-(int)t[i]);
        int k=maxCost,ans=0,l=0,r=0;
        while(r<n){
            k-=diff[r];
            while(k<0){
                k+=diff[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};