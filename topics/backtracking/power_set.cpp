// Leetcode 78: Subsets
/*Given an integer array `nums` of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums=[0]
Output: [[],[0]]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> allSubsets)
    {
        if (i == nums.size())
        {
            // store subset
            allSubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i + 1, allSubsets);
        ans.pop_back(); // backtrack step
        getAllSubsets(nums, ans, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getAllSubsets(nums, ans, 0, allSubsets);
    }
};
