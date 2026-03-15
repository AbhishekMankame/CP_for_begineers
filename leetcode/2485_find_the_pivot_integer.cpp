// https://leetcode.com/problems/find-the-pivot-integer/

// 2485 - Find the pivot Integer

#include<bits/stdc++.h>
using namespace std;

// Brute force approach - For very small constraints (n<=1000)
// Brute force by comuting both sums directly
// TC: O(n^2)
int pivotInteger1(int n){
    for(int x=1;x<=n;x++){
        int left=0,right=0;
        for(int i=1;i<=n;i++){
            left+=i;
        }
        for(int i=x;i<=n;i++){
            right+=i;
        }
        if(right==left) return x;
    }
    return -1;
}

// Better approach - Medium constraints (n<=10^5 or 10^6)
// Avoids recomputing sums
// TC: O(n)
// Here the prefix sum approach is O(n) solution where we keep a running sum of numbers from 1 upto x (the left sum) and compare it to the right sum computed from the total.

int pivotInteger2(int n){
    int total = n * (n+1)/2; // total sum from 1 to n
    int left = 0;   // running sum from 1 to x
    for(int x=1;x<=n;x++){
        left+=x;    // add current number to left sum

        // check if left sum equals right sum (total - left + x)
        if(left == total - left + x)
            return x;
    }
    return -1; // no pivot found
}

/*
How it works (prefix sum idea):
1. 'left' keeps sum 1 --> x
2. 'total - left + x' gives sum x --> n
    - We addd 'x' back because 'total - left' removes 'x' from left side, and right side includes it.
3. When they are equal, 'x' is the pivot.

Complexity:
Time: O(n)
Space: O(1)

*/