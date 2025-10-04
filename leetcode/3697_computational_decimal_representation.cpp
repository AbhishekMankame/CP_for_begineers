// Leetcode 3697 - Computational Decimal Representation
// Difficulty - Easy

/*
You are given a positive integer n.
A positive integer is a base-10 component if it is the product of a single digit from 1 to 9 and a non-negative power of 10.
For example, 500, 30 and 7 are base-10 components, while 537, 102 and 11 are not.

Express n as a sum of only base-10 components, using the fewest base-10 components possible.
Return an array containing these base-10 components in descending order.

Example 1:
Input: n=37
Output: [500, 30, 7]
Explanation: We can express 537 as 500+30+7. It is impossible to express 537 as a sum using fewer than 3 base-10.

Example 2:
Input: n=102
Output: [100, 2]
Explanation: We can express 102 as 100+2. 102 is not a base-10 component, which means 2 base-10 components are needed.

Example 3:
Input: n=6
Output: [6]
Explanation: 6 is a base-10 component.

Constraints:
1 <= n <= 10^9
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> decimalRepresentation(int n){
    vector<int> ans;
    long long int power=1;
    while(n>0){
        int digit=n%10;
        if(digit!=0){
            ans.push_back(digit*power);
        }
        power*=10;
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

/*
Complexity analysis
1. While loop (while n>0): 
    - This loop runs while n is greater than zero. In each iteration, the number of n is reduced by a factor of 10 (since we 'n%10' and then divide by 10), so the loop runs for 'O(log n)' iterations, where n is the input
    number.

2. Inside the loop:
    - 'int digit=n%10;': This is a simple modulus operation, which is constant time i.e., O(1).
    - if(digit!=0): This is a constant time check, i.e., O(1).
    - ans.push_back(digit*power);: The push_back operation on the vector is typicaly O(1) amortized, though in worst case (if the vector grow in size), it can occasionally take O(k) time where k is the number of elements in the vector. However, for simpliclty, we can assume that push_back is O(1) most of the time.
    - power *= 10; : This is a simple multiplication, which takes constant time O(1).

3. Reversing the vector (reverse(ans.begin(), ans.end())):
    - The reverse operation on the vector takes O(m), where m is the size of the vector. Since the size of the vector is at most the number of digits in n, which is O(log n), this operation will take O(log n) time.

*/