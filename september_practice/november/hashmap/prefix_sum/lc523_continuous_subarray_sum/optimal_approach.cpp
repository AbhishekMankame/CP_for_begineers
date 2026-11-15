// https://leetcode.com/problems/continuous-subarray-sum/

// Leetcode 523: Continuous Subarray Sum

#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int> &nums, int k) {
    int n = nums.size();

    // Store remainder -> first occurrence index
    unordered_map<int, int> mp;

    // Handles subarrays starting from index 0
    mp[0] = -1;

    int sum = 0;

    for(int i = 0; i < n; i++) {
        // Calculate running prefix sum
        sum += nums[i];

        // Calculate remainder
        // Handle k = 0 separately to avoid division by zero
        int rem = (k == 0) ? sum : sum % k;

        // Check if the same remainder appeared previously
        if(mp.find(rem) != mp.end()) {
            // Check whether subarray length is atleast 2
            if(i - mp[rem] >= 2) {
                return true;
            }
        }

        // Store only the FIRST occurrence of the remainder
        else {
            mp[rem] = i;
        }
    }
    return false;
}

// TC: O(N)
// SC: O(N)