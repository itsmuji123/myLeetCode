/**
 * @param {number} n
 * @return {number}
 */
var hammingWeight = function(n) {
        let count = 0;
    while (n !== 0) {
     if (n & 1) {
       count++;  
     }       
      n >>>= 1;        
    }
    return count;

};