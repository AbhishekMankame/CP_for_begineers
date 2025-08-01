// Leetcode 90 --> Subsets 2
/*Given an integer array `nums` that may contain duplicates, return all possible subsets (the power set)

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1, 2, 2]
Output: [[], [1], [1,2], [1,2,2],[2],[2,2]]

Example 2:
Input: nums = [0]
Output: [[],[0]]
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void getSubset(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubset)
    {
        if (i == nums.size())
        {
            allSubset.push_back(ans);
            return;
        }

        // Inclusion code
        ans.push_back(nums[i]);
        getSubset(nums, ans, i + 1, allSubset);

        // Backtrack step
        ans.pop_back();

        // Exclusion code
        int index = i + 1;
        while (index < nums.size() && nums[i] == nums[i - 1])
        {
            index++;
        }
        getSubset(nums, ans, index, allSubset);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubset;
        vector<int> ans;
        getSubset(nums, ans, 0, allSubset);
        return allSubset;
    }
};

// Time Complexity: O(n * (2^n))
// Space Compelxity: O(n)
// Note: The solution uses sorting to handle duplicates and enusre that the subsets are unique.
