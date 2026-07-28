// Leetcode 315 - Count of Smaller Number After Self -- Hard Problem
/*Given an integer array `nums`, return an integer array `counts` where `counts[i]` is the number of smaller elements to the right of `nums[i]`.

Example 1:
Input: nums = [5, 2, 6, 1]
Output: [2, 1, 1, 0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1)
To the right of 2 there is only 1 smaller element (1)
To the rigth of 6 there is 1 smaller element (1)
To the right of 1 there is 0 smaller element.

Example 2:

Input: nums = [-1]
Output: [0]
Example 3:

Input: nums = [-1,-1]
Output: [0,0]

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104

Topics:
Array
Binary Search
Divide and Conquer
Binary Indexed Tree
Segment Tree
Merge Sort
Ordered Set

*/

// My code --> Not optimized one O(n^2)

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> countSmaller(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] > nums[j])
                    count++;
            }
            result[i] = count;
        }
        return result;
    }
};

// Time Complexity: O(n^2), where n is the number of elements in the input array
// Space Complexity: O(n), as we are using an additional array to store the results
// This is a brute-force solution