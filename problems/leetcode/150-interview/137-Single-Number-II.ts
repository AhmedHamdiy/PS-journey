function singleNumber(nums: number[]): number {
    let ones = 0; 
    let twos = 0; 
    nums.forEach((num) =>{
        twos |= (ones & num);
        ones ^= num;
        const threes = (ones & twos);
        ones &= ~threes;
        twos &= ~threes;
    });
    return ones;
};