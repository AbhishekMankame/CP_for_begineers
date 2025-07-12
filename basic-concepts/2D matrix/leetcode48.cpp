// Rotate Image [Medium] - LeetCode 48
// Given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.

/*

-------------             -------------
| 1 | 2 | 3 |             | 7 | 4 | 1 |
-------------             -------------
| 4 | 5 | 6 |    ======>  | 8 | 5 | 2 |
-------------             -------------
| 7 | 8 | 9 |             | 9 | 6 | 3 |
-------------             -------------

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        for (int i = 0; i < row; i++)
        {
            for (int j = i; j < row; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

// Time Complexity: O(n^2) - where n is the number of rows (or columns) in the matrix.
// Space Complexity: O(1) - since we are modifying the input matrix in-place.