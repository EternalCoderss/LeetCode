//{ Driver Code Starts
// Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(
        string => { return string.trim(); });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let n = readLine().trim();
        let obj = new Solution();
        console.log(obj.isPrime(n));
    
console.log("~");
}
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number} n
*/

class Solution {

    isPrime(n) {
        // code here
        if ( n == 1)
        return "No";
        
        for (let j = 2; j <= Math.sqrt(n); j++) {
            // Write your logic here
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/

            // return  Yes if n is a prime number ,else return No
            if(n%j == 0) return "No";
        }
        return "Yes"
    }
}