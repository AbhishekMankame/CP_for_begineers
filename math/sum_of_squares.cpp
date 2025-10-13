// Sum of Squares

/*Given n, find sum of squares of first n natural numbers.
Examples:
Input: n=2
Output: 5
Explanation: 1^2 + 2^2 = 1 + 4 = 5

Input: n=8
Output: 204
Explanation: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 = 204

*/

// Naive approach: A naive approach will be o run a loop from 1 to n and sum up all the squares

#include<iostream>
using namespace std;

int sumation(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += (i*i);
    }

    return sum;
}

// Time Complexity: O(n)
// Space Complexity: O(1), since no extra space has been taken


/*Efficient Approach
There exists a formula for finding the sum of squares of first n numbers.

1 + 2 + ... + n = n(n+1)/2
1^2 + 2^2 + 3^2 + .... + n^2 = n(n+1)(2n+1)/6

Example: n = 3
    = 3 * (3 + 1) + (2*3 + 1) / 6
    = (3 * 4 * 7) / 6
    = 84 / 6
    = 14

*/