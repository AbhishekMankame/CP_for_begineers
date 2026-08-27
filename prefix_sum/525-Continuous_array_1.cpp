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