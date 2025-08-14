// Leetcode 39 - Combination Sum
/* Given an array of distinct integers `candidates` and a target integer `target`, return a list of all unique combinations of `candidates` where the chosen numbers sum to `target`. You may return the combinations in any order.

The same number may be chosen from `candidates` an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen number is different.

The test cases are generated such that the number of unique combinations that sum up to `target` is less than `150` combinations for the given input.

Example 1:
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation: 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times. 7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []


Constraints:
1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of `candidates` are distinct
1 <= target <= 40

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution
{

public:
    set<vector<int>> s;
    void combS(vector<int> &arr, int i, vector<int> &comb, vector<vector<int>> &ans, int target)
    {
        int n = arr.size();
        if (i == n || target < 0)
            return;
        if (target == 0)
        {
            if (s.find(comb) == s.end())
            {
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        comb.push_back(arr[i]);
        combS(arr, i + 1, comb, ans, target - arr[i]); // single inclusion
        combS(arr, i, comb, ans, target - arr[i]);     // Multiple inclusion
        comb.pop_back();                               // Backtracking
        combS(arr, i + 1, comb, ans, target);          // Exclusion
    }

    vector<vector<int>> combinationSum(vector<int> &arr, int target)
    {
        vector<vector<int>> ans;
        vector<int> comb;
        combS(arr, 0, comb, ans, target);

        return ans;
    }
};