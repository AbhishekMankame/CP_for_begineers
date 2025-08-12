// Rat in a maze problem
#include <iostream>
#include <vector>
using namespace std;

vector<string> findPath(vector<vector<int>> &mat)
{
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