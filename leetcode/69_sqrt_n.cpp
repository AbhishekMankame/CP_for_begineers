// Leetcode 69 - Sqrt(x)
/*Ginve a non-negative integer `x`, return the sqaure root of `x` rounded to the nearest integer, The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
- For example, do not use `pow(x, 0.5)` in C++ or `x**0.5` in python.

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

Constraint:
0 <= x <= 2^31 - 1

Topics: Math Binary Search
*/

#include <iostream>
using namespace std;

int sqrtx(int x)
{
    if (x == 0 || x == 1)
        return x;
    long int result = 1;
    long int i = 1;

    while (result <= x)
    {

        result = i * i;
    }
    return i - 1;
}

int main()
{
    int x = 8;
    cout << sqrtx(x);
    return 0;
}
