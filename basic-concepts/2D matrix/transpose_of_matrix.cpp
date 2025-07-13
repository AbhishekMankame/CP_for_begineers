// Transpose of a matrix - Given an n x n 2D matrix, compute the transpose of the matrix.
/* Leetcode 867 - Given a 2D integer array `matrix`, return the transpose of `matrix`.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

----------------              ----------------
| 2   | 4 | -1 |              | 2 | -10 | 18 |
----------------              ----------------
| -10 | 5 | 11 |    ======>   | 4 |  5  | -7 |
----------------              ----------------
| 18  | -7 | 6 |              | -1 | 11 | 6  |
----------------              ----------------

*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> transpose(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}

// Time Complexity: O(n * m) - where n is the number of rows and m is the number of columns in the matrix.
// Space Complexity: O(n * m) - for the transpose matrix.