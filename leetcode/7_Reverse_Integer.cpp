// Leetcode - 7: Reverse Integer (Medium)
/*Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31-1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21


Constraints:
-231 <= x <= 231 - 1

Topics: Math
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long rev = 0;
        while (x)
        {
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }
        if (rev < INT_MIN || rev > INT_MAX)
            return 0;
        return (int)rev;
    }
};