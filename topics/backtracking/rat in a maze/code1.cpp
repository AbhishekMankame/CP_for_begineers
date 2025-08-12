// Rat in a maze problem
#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans)
{
    helper(mat, r + 1, c, path + "D", ans); // down
    helper(mat, r - 1, c, path + "D", ans); // up
    helper(mat, r, c + 1, path + "R", ans); // right
    helper(mat, r, c - 1, path + "L", ans); // left
}

vector<string> findPath(vector<vector<int>> &mat)
{
    vector<string> ans;
    string path = "";
    helper(mat, 0, 0, path, ans);

    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    vector<string> ans = findPath(mat);
    for (string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}