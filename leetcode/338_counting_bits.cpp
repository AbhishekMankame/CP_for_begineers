// Leetcode 338 - Couting Bits
// Easy

/*
Given an integer n, return an array ans of length n+1 such that for each i (0<=i<=n), ans[i] is the number of 1's in the binary representation of i.

Example 1:
Input: n=2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Example 2:
Input: n=5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

Constraints:
0 <= n <= 10^5

Follow up:
- It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
- Can you do it without using any built-in function (i.e, like __builtin_popcount in C++)?

Topics: DP, Bit Manipulation

*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> countBits(int n){
    vector<int> ans(n+1,0); // Create an array to store the number of 1s for each number

    // For each number from 1 to n, calculate the number of 1 bits
    for(int i=1;i<=n;i++){
        ans[i] = ans[i>>1] + (i&1); // Use right shift to divide by 2, and check if current number is odd or even
    }

    return ans;
}

/*
Time Complexity:
- The loop runs exactly n times (from 1 to n)
- Inside the loop
    - i >> 1 (right shift) -> O(1) operation
    - i & 1 (bitwise AND) -> O(1) operation
    - Array assignment ans[i] = ... -> O(1) operation

    Since each iteration does only constant-time work, the total time across all iterations is:
    O(1) + O(1) + ... + O(1) = O(n)

    Final Time Complexity: O(n)


*/