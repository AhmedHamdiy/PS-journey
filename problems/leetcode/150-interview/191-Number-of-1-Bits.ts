function hammingWeight(n: number): number {
  let ans=0;
  while(n>0){
    ans+=(n&1);
    n>>=1;
  }
  return ans;
};