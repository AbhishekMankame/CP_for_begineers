/*238. Product of array except self
Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Let us solve using brute force approach
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> prod(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans[i] = ans[i] * arr[j];
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> res = prod(arr);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
}

// This is an brute force approach
// Time Complexity: O(N^2)
// Space Complexity: O(1)