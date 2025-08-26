// Leetcode 1886 - Determine Whether Matrix Can Be Obtained By Rotation  --> Easy
/*Given two `n*n` binary matrices `mat` and `target`, return `true` if it is possible to make `mat` equal to `target` by rotating `mat` in 90-degree increments, or `false` otherwise.


Example 1:


Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.


Constraints:
n == mat.length == target.length
n == mat[i].length == target[i].length
1 <= n <= 10
mat[i][j] and target[i][j] are either 0 or 1.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate90(vector<vector<int>> &mat)
{
    int n = mat.size();

    // Transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Reverse the rows
    for (int i = 0; i < n; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}

bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    int n = mat.size();
    for (int i = 0; i < 4; i++)
    {
        if (mat == target)
            return true;
        rotate90(mat);
    }
    return false;
}