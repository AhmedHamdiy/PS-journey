function plusOne(digits: number[]): number[] {
  let i:number=digits.length-1;
  while(i>=0){
    digits[i]++;
    if(digits[i]<=9)
        return digits;
    digits[i]=0;
    i--;
  }
  digits.unshift(1);
  return digits;
};