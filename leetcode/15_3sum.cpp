// Leetcode 15 - 3SUM

/*Given an integer array nums, return all the triplets `nums[i], nums[j], nums[k]` such that `i!=j, i!=k, and j!=k` and `nums[i]+nums[j]+nums[k]==0`.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

Example 2:
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3:
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> result;
        int n = nums.size();

        // Sort the array to use two pointers and avoid duplicates easily
        sort(nums.beign(), nums.end());

        for(int i=0;i<n;i++){
            // Skip duplicate elements for i
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -nums[i];
            int left = i+1;
            int right = n-1;

            while(left<right){
                int sum = nums[left]+nums[right];
                if(sum==target){
                    result.push_back(nums[i], nums[left], nums[right]);
                    
                    // skip duplicates for left pointer
                    while(left<right && nums[left]==nums[left-1]) left++;

                    // skip duplicates for right pointer
                    while(left<right && nums[right]==nums[right+1]) right--;

                    left++;
                    right--;
                }
                else if(sum<target) < left++;
                else right--;
            }
        }
        return result;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(k)