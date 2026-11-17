// https://leetcode.com/problems/minimum-positive-sum-subarray/

#include<bits/stdc++.h>
using namespace std;

int minimumSumSubarray(vector<int> &nums, int l, int r) {
    int n = nums.size();
    int ans = INT_MAX;

    for(int len = l; len <= r; len++) {
        int sum = 0;
        
        // Calculate first window
        for(int i = 0; i < len; i++) {
            sum += nums[i];
        }
        if(sum > 0) {
            ans = min(ans, sum);
        }

        // Slide the window
        for(int i = len; i < n; i++) {
            sum -= nums[i - len];
            sum += nums[i];

            if(sum > 0) {
                ans = min(ans, sum);
            }
        }
    }
    return ans == INT_MAX ? -1 : ans;
}

// TC: O(n * (r - l + 1))
// SC: O(1)

/*
There are two things happening:
- Outer loop: iterates over every possible window size from l to r.
- Inner loops: calculate the first window and slide through the remaining array.
*/