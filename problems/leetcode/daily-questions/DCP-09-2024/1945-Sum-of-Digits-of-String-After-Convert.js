/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var getLucky = function(s, k) {
    const transform = function(t) {
                let res = 0;
                        while (t > 0) {
                                    res += t % 10;
                                                t = Math.floor(t / 10);
                                                        }
                                                                return res;
                                                                    };
                                                                        
                                                                            let res = 0;
                                                                                for (let ch of s) {
                                                                                        let num = ch.charCodeAt(0) - 'a'.charCodeAt(0) + 1;
                                                                                                if (num >= 10) {
                                                                                                            res += num % 10 + Math.floor(num / 10);
                                                                                                                    } else {
                                                                                                                                res += num;
                                                                                                                                        }
                                                                                                                                            }

                                                                                                                                                while (--k > 0) {
                                                                                                                                                        res = transform(res);
                                                                                                                                                            }

                                                                                                                                                                return res;
    
};