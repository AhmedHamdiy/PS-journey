class Solution {
public:
    int passThePillow(int n, int time) {
        return 1+(((time%(2*n-2))<n)?(time%(2*n-2)):(2*n-2)-(time%(2*n-2)));
    }
};