// Leetcode 300 - L0ongest Increasing Subsequence
// Medium

/*
Given an integer array 'nums', return the length of the longest strictly increasing subsequence.

Example 1:
Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

Example 2:
Input: nums = [0,1,0,3,2,3]
Output: 4

Example 3:
Input: nums = [7,7,7,7,7,7,7]
Output: 1

Constraints:
1 <= nums.length <= 2500
-10^4 <= nums[i] <= 10^4

Topics: Array, Binary Search, Dynamic Programming

*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;

        // DP array to store the length of the longest increasing subsequence up to each index
        vector<int> dp(nums.size(), 1);

        for (int i = 1; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);  // Update dp[i] with the max subsequence length ending at i
                }
            }
        }

        return *max_element(dp.begin(), dp.end());  // The answer is the max value in dp
    }
};
