function myPow(x: number, n: number): number {
    let ans:number=1;
    if(n<0){
        n=-n;
        x=1/x;
    } 
    while(n>0){
        if(n%2===1)
            ans*=x;
        x*=x;
        n=Math.floor(n/2);        
    }
    return ans;
};