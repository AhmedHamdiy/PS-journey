class Solution {
public:
    bool isPalindrome(int x) {
     if(x<0)return false;
     if(x==0) return true;
     vector<short> digits;
     while(x){
        digits.push_back(x%10);
        x/=10;
     }
     int l=0,r=digits.size()-1;
     while(l<=r){
        if(digits[l]!=digits[r]) return false;
        l++;
        r--;
     }
     return true;
    }
};