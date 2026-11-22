#include<bits/stdc++.h>
using namespace std;

int minimumSumSubarray(vector<int> &nums, int l, int r) {
    int n = nums.size();
    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += nums[k];
            }
            int len = j - i + 1;
            if(len >= l && len <= r && sum > 0) {
                ans = min(ans, sum);
            }
        }
    }
    return ans == INT_MAX ? -1 : ans;
}

/*
Time Complexity Analysis
Your code contains three nested loops:

Outer loop (i): Runs n times.

Middle loop (j): Runs up to n times for each i.

Inner loop (k): Calculates the subarray sum and runs up to n times.

Therefore:
T(n)=O(n×n×n)
Time Complexity: O(n³)
Space Complexity Analysis
ans, sum, len, and n are integer variables.

No additional arrays or data structures are used.
*/