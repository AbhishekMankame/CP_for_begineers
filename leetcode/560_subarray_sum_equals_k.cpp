// 560 - Subarray Sum Equals K
// Medium
// https://leetcode.com/problems/subarray-sum-equals-k/description/

/*
Given an array of integers 'nums' and an integer 'k', return the total number of subarrays whose sum equals to 'k'.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k=2
Output: 2

Example 2:
Input: nums = [1,2,3], k=3
Output: 2

Constraints:
- 1 <= nums.length <= 2*10^4
- -1000 <= nums[i] <= 1000
- -10^7 <= k <= 10^7

Topics: Array, Hash Table, Prefix Sum
*/

/*
Approach: We use the Prefix Sum + HashMap technique.

Key Idea:
If prefixSum[i] - prefixSum[j] = k,
then the subarray (j+1 ... i) has sum = k

Rearrange: prefixSum[j] = prefixSum[i] - k

So while iterating:
- Keep a running prefix sum
- For each index, check if (current_sum - k) has appeared before.
- If yes, add its frequency to the answer.

*/


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int> &nums, int k){
    // HashMap to store:
    // prefixSum value -> how many times it has appeared
    unordered_map<int,int> prefixCount;

    // Important initialization:
    // We set the prefix sum to 0 to have frequency 1.
    // This handles cases where a subarray starting from index 0 has sum=k
    prefixCount[0] = 1;

    int currentSum = 0; // Running prefix sum
    int totalSubarrays = 0; // Final answer

    // Iterate through the array
    for(int num:nums) {
        // Update running prefix
        currentSum += num;

        // If (currentSum -k) exists in the map, it means there is a previous prefix sum
        // that forms a subarray ending here with sum=k
        if(prefixCount.find(currentSum-k)!=prefixCount.end()){
            totalSubarrays+=prefixCount[currentSum-k];
        }
        // Record the current prefix sum in the map so it can be used for the future subarrays
        prefixCount[currentSum]++;
    }
    return totalSubarrays;
}

// TC: O(n)
// SC: O(n)
