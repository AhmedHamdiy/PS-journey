public class Solution {
    public uint reverseBits(uint n) {
           uint res=0;
        for(int i=0;i<32;i++){
            uint lsb=n & 1;
            uint lsb_reverse=lsb<<(31-i);
            res= res | lsb_reverse;
            n=n>>1;
        }
        return res;
    }
}