// Leetcode 190 - Reverse Bits
// Easy

/*
Reverse bits of a given 32 bits signed integer:

Example 1:
Input: n = 43261596

Output: 964176192

Explanation:

Integer	Binary
43261596	00000010100101000001111010011100
964176192	00111001011110000010100101000000

Example 2:

Input: n = 2147483644

Output: 1073741822

Explanation:

Integer	Binary
2147483644	01111111111111111111111111111100
1073741822	00111111111111111111111111111110

Constraints:
- 0 <= n <= 2^31-2
- n is even

Follow up: If this function is called many times, how would you optimize it?

Topics: Divide and Conquer, Bit Manipulation
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int reverseBits(int n){
    int result=0;
    for(int i=0;i<32;i++){
        // Shift result to make space and then OR add the last bit of n
        result=(result<<1)|(n&1);
        // Move to the next bit
        n>>=1;
    }
    return result;
}

/*
Time Complexity: O(1)
Why???
- The loop always runs exactly 32 times
- 32 is a constant, not dependent on input size
- Each iteration does constant-time operations:
    - bitwise AND (&)
    - bitwise OR (|)
    - bit shifts (<<, >>)

Mathematical Explanation: T(n) = 32*O(1) = O(1)
Even if the input value changes:
- Small number
- Large number
- All bits zero
- All bits one
--> Execution time stays same.

Important Interview Note!!!:
Even though we use a loop, this is not O(n) because:
- n is not input size
- The bit width (32) is fixed
This is a common interview trick

Space Complexity: O(1)
Why?
- We only use:
    - one integer result
    - a loop counter
- No extra arrays, vectors, or recursion
- No memory grows with input size
So memory usage is constant.

*/