// https://leetcode.com/problems/continuous-subarray-sum/

// Leetcode 523: Continuous Subarray Sum

// Brute Force approach: Here in bruteforce approach, we will solve it using 2 loops (nested for loops)

#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int> &nums, int k) {
    int n = nums.size();
    bool ans = false;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += nums[j];
            if((sum % k == 0) && ((j - i + 1) == 0)) ans = true;
        }
    }
    return true;
}

// TC: O(N^2)
// SC: O(1)

// Note: This code got failed due to Time Limit Exceeded error in Leetcode during submission