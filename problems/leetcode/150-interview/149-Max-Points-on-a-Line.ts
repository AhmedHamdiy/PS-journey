function maxPoints(points: number[][]): number {
    if ( points.length < 3 ) return points.length;
    const n = points.length, mp = new Map<number, number>(); 
    let max = 2;
    for ( let i = 0; i < n - max; i++ ) {
        const [ x0, y0 ] = points[ i ];
        for ( let j = i + 1; j < n; j++ ) {
            const [ x1, y1 ] = points[ j ],
                slope = ( x1 === x0 ) ? Infinity : ( y1 - y0 ) / ( x1 - x0 ) + 0;
            if ( mp.has( slope ) ) {
                const cnt = ( mp.get( slope ) as number ) + 1;
                mp.set( slope, cnt );
                max = Math.max(cnt,max);
            } else mp.set( slope, 2 );
        }
        mp.clear();
    }
    return max;
};