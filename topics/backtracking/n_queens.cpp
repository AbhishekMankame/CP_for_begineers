// N-Queens problem using backtracking

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isSafe(vector<string> &board, int row, int col, int n)
    {
        // horizontal
        for (int j = 0; j < n; j++)
        {
            if (board[row][j] == 'Q')
            {
                return false;
            }
        }

        // vertical
        for (int i = 0; i < n; i++)
        {
            if (board[i][col] == 'Q')
            {
                return false;
            }
        }
    }

    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
    {
        if (row == n)
        {
            ans.push_back({board});
            return;
        }

        for (int j = 0; j < board.size(); j++)
        {
            if (isSafe(board, row, j, n))
            {
                board[row][j] = 'Q';
                nQueens(board, row + 1, n, ans);
                board[row][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> board;
        vector<vector<string>> ans;
        nQueens(board, 0, n, ans);
        return ans;
    }
};