function isPalindrome(x: number): boolean {
    if(x<0) 
        return false;
    if(x==0)
        return true;
    let digits:number[]=[];
    while(x){
        digits.push(x%10);
        x=Math.floor(x/10);
    }
    let l:number=0,r:number=digits.length-1;
    while(l<=r){
        if(digits[l]!=digits[r]) 
            return false;
        l++;
        r--;
    }
    return true;
};
