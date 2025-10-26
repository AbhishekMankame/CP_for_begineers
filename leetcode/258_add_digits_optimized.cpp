// Leetcode 258 - Add digits
// Easy

/* To solve this problem in O(1) time we can use digit rool formula:
digits(num) = 0 if num==0
              1 + (num-1)%9 if num>0

This works because the repeated sum of digits modulo 9 gives the same result as the digital root.

*/