// Leetcode 260 - Single Number III
// https://leetcode.com/problems/single-number-iii/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    public:
    vector<int> singleNumber(vector<int>& nums){
        ll xori=0;
        for(int i:nums) xori^=i;
        ll set_bit=xori&-xori;
        int x=0,y=0;
        for(int i:nums){
            if(i&set_bit) x^=i;
            else y^=i;
        }

        return {x,y};
    }
}

/*
Complexity Analysis:
1. Algorithm Steps
Step 1: XOR all elements
int xori=0;
for(int x:arr) xori^=x;

Purpose: Cancels all duplicates -> leaves num1^num2
Operations:
- Loop runs 'n' times
- Each XOR is O(1)

So, Time Complexity: O(n)

Step 2: Find rightmost set bit
int set_bit = xori&-xori;
This is just two operations:
- unary negation
- bitwise AND
Both are constant-time CPU instructions.

So, Time Complexity: O(1)

Step 3: Split numbers into two groups
int x=0,y=0;
for(int num:arr){
    if(num&set_bit) x^=num;
    else y^=num;
}

Again:
- Loop runs 'n' times
- Each iteration does constant work

So, time complexity: O(n)

2. Total Time Complexity:
Combine all steps: O(n) + O(1) + O(n)
Which simplifies to: O(n)
This is optimal, because we must at least read every element once.

3. Space Complexity:
Variables used: xori, set_bit, x, y
Only constant number of variables, no extra arrays.
So, O(1)
*/