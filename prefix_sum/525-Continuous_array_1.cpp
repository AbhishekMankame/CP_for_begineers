// https://leetcode.com/problems/contiguous-array/description/

// Leetcode 525 - Continuous Array

// We will try solving it using brute force approach

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMax(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++) {
            int numZeros = 0;
            int numOnes = 0;

            for(int j=i;j<n;j++) {
                if(nums[j]==0) numZeros++;
                else numOnes++;

                if(numZeros == numOnes) {
                    ans = max(ans,j-i+1);
                }
            }
        }
        return 0;
    }

};

/*
Time Complexity:
There are two nested loops:
    - Outer loop runs `n` times.
    - For each `i`, the inner loop runs `n` times.

So roughly: n + (n-1) + (n-2) + ... + 1

This is: n(n+1)/2

Ignoring constants: O(n^2)
So the time complexity is O(n^2)

Space Complexity: O(1)

Note: This approach with O(n^2) time complexity - results in TLE for larger test cases.
*/