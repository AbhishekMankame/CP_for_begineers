#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getSubset(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // Exclusion
    getSubset(arr, ans, i + 1);
    // Inclusion
    ans.push_back(arr[i]);
    getSubset(arr, ans, i + 1);
    // Backtrack case
    ans.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store subsets

    getSubset(arr, ans, 0); // here 0 is index from where we will start
    return 0;
}

// Time Complexity: O(n * 2^n)