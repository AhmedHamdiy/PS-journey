function moveZeroes(nums: number[]): void {
  let r = 0;
  for (let l = 0; l < nums.length; l ++) {
    const val = nums[l];
    nums[l] = 0;
    if (val!==0) {
      nums[r] = val;
      r ++;
    }
  }
};