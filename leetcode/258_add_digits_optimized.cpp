// Leetcode 258 - Add digits
// Easy

/* To solve this problem in O(1) time we can use digit rool formula:
digits(num) = 0 if num==0
              1 + (num-1)%9 if num>0

This works because the repeated sum of digits modulo 9 gives the same result as the digital root.

*/

#include<iostream>
using namespace std;

int addDigits(int num){
    if(num==0) return 0;
    return 1+(num-1)%9;
}

// Time Complexity: O(1)
// Space Complexity: O(1)

/*
Let's talk about Digital Root

1. What is a Digital Root?
- The digital root of a number is the single-digit value obtained by repeatedly summing the digits of the number until only one digit remains.

nums = 9875
Step 1: 9 + 8 + 7 + 5 = 29
Step 2: 2 + 9 = 11
Step 3: 1 + 1 = 2

Digital root = 2

So digital root(9875) = 2

*/