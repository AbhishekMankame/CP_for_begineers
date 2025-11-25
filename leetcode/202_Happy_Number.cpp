// Leetcode 202 - Happy Number
// Easy

/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:
- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (when it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.

Retur true if n is a happy, and false is not.

Example 1:
Input: n=19
Output: true
Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

Example 2:
Input: n=2;
Output: false

Constraints: 1<=n<=2^31-1

Topics: Hash Table, Math, Two Pointers
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

int getSum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d*d;
        n=n/10;
    }
}

bool isHappy(int n){
    unordered_set<int> seen;
    while(n!=1 && !seen.count(n)) {
        see.insert(n);
        n=getSum(n);
    }
    return n==1;
}

/*
Time Complexity:
- At most ~10 unique numbers before repeating
- O(log n) per iteration (digit extraction)
- Overall O(log n)

Space Complexity:
- Hash set storin previously seen numbers
- O(log n)
*/