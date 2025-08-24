// Leetcode 200

/*Given an `m*n` 2D binary grid `grid` which represents a map of `1`s(land) and `0`s(water), return the number of islands

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3

Constraints:
m == grid.length
n == grid[i].length
1 <= m,n <= 300
grid[i][j] is `0` or `1`

Topics: Array
Depth-First Search
Breadth-First Search
Union Find
Matrix
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(vector<vector<char>> &mat, int i, int j)
{
    if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || mat[i][j] != '1')
        return;

    mat[i][j] = '0'; // is visited
    dfs(mat, i, j + 1);
    dfs(mat, i, j - 1);
    dfs(mat, i - 1, j);
    dfs(mat, i + 1, j);
}

int numIslands(vector<vector<char>> &mat)
{
    int count = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == '1')
            {
                count++;
                dfs(mat, i, j);
            }
        }
    }
    return count;
}