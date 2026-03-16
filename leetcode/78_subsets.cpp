// https://leetcode.com/problems/subsets/description/

// Leetcode 78 - Subsets

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<<int>> subsets(vector<int>& nums){

        // Number of elements in the input array
        int n = nums.size();

        // Total number of subsets = 2^n
        // (1<<n) is equivalent to 2^n using bit shifting
        int totalSubsets = 1<<n;

        // Result container to store all subsets
        vector<vector<int>> result;

        // Iterate through all possible bitmasks from 0 to 2^n-1
        for(int mask=0;mask<totalSubsets;mask++){
            // Current subset corresponding to this mask
            vector<int> subset;

            // Check each bit position
            for(int j=0;j<n;j++){
                /*
                Check if the j-th bit is set in the current mask.
                (1<<j) creates a number where only the j-th bit is set.
                mask & (1<<j) checks if that bit exists in mask.

                If true -> include nums[j] in the subset.
                */
                if(mask&(1<<j)){
                    subset.push_back(nums[j]);
                }
            }
            // Add the constructed subset to the result
            result.push_back(subset);
        }

        // Return all generated subsets
        return result;

    }
}