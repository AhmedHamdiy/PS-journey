function singleNumber(nums: number[]): number {
   let ans=0;
   nums.forEach((k)=>ans^=k);
   return ans; 
};