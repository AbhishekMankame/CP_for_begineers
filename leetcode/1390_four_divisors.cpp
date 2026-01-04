// Leetcode 1390 - Four Divisors
// Medium

/*
Given an integer array 'nums', return the sum of divisors of the integers in the array that have exactly four divisors. If there is no such integer return 0.

Example 1:
Input: nums=[21,4,7]
Output: 32
Explanation:
21 has 4 divisors: 1,3,7,21
4 has divisors: 1,2,4
7 has 2 divisors: 1,7
The answer is the sum of divisors of 21 only.

Example 2:
Input: nums = [21,21]
Output: 64

Example 3:
Input:: nums = [1,2,3,4,5]
Output: 0

Constraints:
- 1<=nums.length<=10^4
- 1 <= nums[i] <= 10^5

Topics: Array, Math
*/

// Brute Force
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int divisors(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    return count;
}

int sumOfDiv(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) sum+=i;
    }
    return sum;
}

int sumFourDivisors(vector<int>& nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(divisors(nums[i])==4) sum+=sumOfDiv(nums[i]);
    }
    return sum;
}