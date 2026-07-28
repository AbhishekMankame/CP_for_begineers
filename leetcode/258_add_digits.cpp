// Leetcode 258 --> Add digits (Easy)
/*Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:
Input: num = 38
Output: 2
Explanation: The process is
    38 --> 3 + 8 = 11
    11 --> 1 + 1 = 2
    Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0

Constraints:
0 <= num <= 2^31 - 1

Follow up: Could you do it without any loop recursion in `O(1)` runtime?
*/

#include <iostream>
using namespace std;

int addDigits(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << addDigits(n) << endl;
    return 0;
}

// Time Complexity: O(log n)
/*Inner Loop:
- Sums the digits of `num`
- Takes O(log n to the base 10) time since it processes each digit of the number
    - A number like 12345 has 5 digits => 5 iterations
*/