/**
 * @param {number[]} rolls
 * @param {number} mean
 * @param {number} n
 * @return {number[]}
 */
var missingRolls = function(rolls, mean, n) {
    let sum = 0;
        let output = []
            let difTotal = 0;

                for(let i of rolls){
                        sum += i;
                            }
                                avgTotalMax = sum + (n*6)
                                    avgTotalMin = sum + (n*1)
                                        avgTotalMax /= (rolls.length + n)
                                            avgTotalMin /= (rolls.length + n)
                                                if(avgTotalMax < mean || avgTotalMin > mean){
                                                        return []
                                                            }else if( avgTotalMax == mean){
                                                                    for(let i = 0 ; i< n; i++){
                                                                                output.push(6)
                                                                                        }
                                                                                            }else{
                                                                                                    difTotal = (mean * (rolls.length + n) ) - sum;
                                                                                                            let rest;
                                                                                                                    for(let i = 0; i<n; i++){
                                                                                                                                rest = Math.floor(difTotal/(n-i));
                                                                                                                                            
                                                                                                                                                        if(rest <= difTotal){
                                                                                                                                                                        if(i == n - 1){
                                                                                                                                                                                            output.push(difTotal)
                                                                                                                                                                                                            }else{
                                                                                                                                                                                                                                output.push(rest)
                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                difTotal -= rest;
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                            return output;
};