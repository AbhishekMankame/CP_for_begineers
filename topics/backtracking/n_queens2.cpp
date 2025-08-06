// N-Queens II
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    // checking the is safe conditions

    // horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
            return false;
    }

    // vertical
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    // left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void nQueens(vector<string> &board, int row, int n, int &count)
{
    if (row == n)
    {
        count++;
        return;
    }
    for (int j = 0; j < n; j++)
    {
        board[row][j] = 'Q';
        nQueens(board, row + 1, n, count);
        board[row][j] = '.';
    }
}

int totalQueens(int n)
{
    int count = 0;
    vector<string> board(n, string(n, '.'));
    nQueens(board, 0, n, count);
    return count;
}