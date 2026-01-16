// Leetcode 172 - Factorial Trailing Zeroes
// Medium
/*
Given an integer 'n', return the number of trailing zeroes in 'n!'.
Note that n! = n * (n-1) * (n-2) * ... * 3 *2 * 1.

Example 1:
Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.

Example 2:
Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.

Example 3:
Input: n = 0
Output: 0

Constraints:
- 0 <= n <= 10^4

Follow up: Could you write a solution that works in logarithmic time complexity?

Topic: Math

*/

/*
Key idea: Trailing zeros in a factorial come from the factors of 10: 10 = 2 * 5
In 'n!', there are far more 2s than 5s, so the number of trailing zeros depends entirely on how many time 5 appears as a factor.

How to count factors of 5?
- Every multiple of 5 contributes atleast one 5
- Every multiple of 25 contributes an extra 5
- Every multiple of 125 contributes an another 5
- And so on...

So the total number of trailing zeros is:
floor(n/5) + floor(n/25) + floor(n/125) + ...
Stop when the divisor exceeds 'n'.

*/

#include<iostream>
using namespace std;

int trailingZeros(int n){
    int count = 0;
    for(long long i=5;i<=n;i*=5){
        count+=n/i;
    }
    return count;
}