// Transpose of a matrix - Given an n x n 2D matrix, compute the transpose of the matrix.
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