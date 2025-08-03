// This is the same code as for Subsets 2, just for practice

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void getSubset(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allSubset)
    {
        if (i == arr.size())
        {
            allSubset.push_back(ans);
            return;
        }

        // Inclusion
        ans.push_back(arr[i]);
        getSubset(arr, ans, i + 1, allSubset);

        // Backtrack waala step
        ans.pop_back();

        // Exclusion
        int index = i + 1;
        while (index < arr.size() && arr[i] == arr[i - 1])
        {
            index++;
        }
        getSubset(arr, ans, index, allSubset);
    }

    vector<vector<int>> subsetWithDup(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> answerSet;
        vector<int> ans;
        getSubset(arr, ans, 0, answerSet);

        return answerSet;
    }
};
