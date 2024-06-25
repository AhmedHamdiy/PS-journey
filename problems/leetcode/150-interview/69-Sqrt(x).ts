function mySqrt(x: number): number {
    let i:number=0;
    while(i*i<x)
        i++;
    return i*i==x?i:i-1;
};