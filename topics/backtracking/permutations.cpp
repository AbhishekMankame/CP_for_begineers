// Permutation

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void getPerms(vector<int> &nums, int idx, vector<vector<int>> &ans)
    {
        if (idx == nums.size())
        {
            ans.push_back({nums});
            return;
        }

        for (int i = idx; i < nums.size(); i++)
        {
            swap(nums[idx], nums[i]); // idx place => ith element choice
            getPerms(nums, idx + 1, ans);
            swap(nums[idx], nums[i]); // backtrack
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        getPerms(nums, 0, ans);
        return ans;
    }
};

// Time Complexity: At the end humare paas n! solutions aayenge, as we know that recursion tree ke last level par n! calls aane waale hai. Par har ek call reach karne keliye jitne humare nums array ka size hai, humne utne spaces keliye choice liye hai, matlab jab hum iss ek call par aaye hai, toh hum `n` choices lekar aaye hai.
// n! * n choices ==> O(n! * n)

// Space complexity: n! + n levels deep in worst case for call stack
// SC: O(n!)