// Rat in a maze problem
#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans)
{
    int n = mat.size();
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1)
    {
        return;
    }

    // answer waala base case
    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1; // yaha par isliye place kiya hai ki, jab next waale saare calls lagao toh unko pata rahe ki that particular (r,c) is visited cell

    helper(mat, r + 1, c, path + "D", ans); // down
    helper(mat, r - 1, c, path + "U", ans); // up
    helper(mat, r, c + 1, path + "R", ans); // right
    helper(mat, r, c - 1, path + "L", ans); // left

    // Most IMP: Backtracking step in the same problem is ki, ek baar humne visited ko true maan liya, aur humne calls lagayi, toh hum jab inn calls se waapis aayenge, toh dobara, hume visited ko false mark karna padega

    mat[r][c] = 1;
}

vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();
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

/* Time Complexity: hamare paas total n*n cells hai.
Agar har cells se hum 4 different calls le sakte hai, then 4^(n^2) total choices hum le sakte hai

TC: O(4^(n^2))

Space Complexity: Here we are not using any extra space, only recursion stack space is used which is O(n^2) in the worst case.
If we had used visited array to keep track of visited cells, then the space complexity would have been O(n^2) extra space will be added.
*/