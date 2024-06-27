function multiply( num1: string, num2: string ): string {
    const code0 = '0'.charCodeAt( 0 ),
        n1 = num1.length, n2 = num2.length,
        nums = Array( n1 + n2 ).fill( 0 );
    for ( let i1 = 0; i1 < n1; i1++ )
        for ( let i2 = 0; i2 < n2; i2++ )
            nums[ i1 + i2 ] += 
            ( num1.charCodeAt( n1 - 1 - i1 ) - code0 || 0 ) *
            ( num2.charCodeAt( n2 - 1 - i2 ) - code0 || 0 )
    let res = '', d = 0, n = n1 + n2;
    while ( nums[ --n ] === 0 );
    for ( let i = 0; i <= n; i++ ) {
        res = ( nums[ i ] + d ) % 10 + res;
        d = ( nums[ i ] + d ) / 10 | 0;
    }
    return ( d > 0 ) ? d + res : res || '0';

};