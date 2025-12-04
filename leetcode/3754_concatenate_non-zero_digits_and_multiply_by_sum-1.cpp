// Leetcode 3754 - Concatenate Non-Zero Digits and Multiply by Sum 1
// Easy

/*
You are given an integer n.
Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x=0.
Let sum be the sum of digits in x.
Return an integer representing the value of x*sum.

Example 1:
Input: n = 10203004
Output: 12340
Explanation:
- The non-zero digits are 1,2,3 and 4. Thus, x = 1234.
- The sum of digits is sum = 1+2+3+4=10
- Therefore, the answer is x*sum = 1234*10 = 12340

Example 2:
Input: n=1000
Output: 1
Explanation:
- The non-zero digit is 1, so x=1 and sum=1.
- Therefore, the answer is x*sum = 1*1

Constraints:
- 0 <= n <= 10^9

Topics: Math

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long sumAndMultiply(int n){
    long long int sum=0;
    long long int num=0;

    while(n!=0){
        long long int dig=n%10;
        if(dig!=0){
            sum+=dig;
            num=num*10+dig;
        }
        n=n/10;
    }

    int num2=0;
    while(num!=0){
        num2=num2*10+(num%10);
        num=num/10;
    }

    return sum*num2;
}