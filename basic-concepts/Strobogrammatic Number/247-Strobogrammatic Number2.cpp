/*LeetCode 247 - Strobogrammatic Number II
Given an integer `n`, return all the strobogrammatic numbers that are of length `n`.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> findStrobogrammatic(int n)
    {
        return build(n, n);
    }

private:
    vector<string> build(int n, int totalLength)
    {
        if (n == 0)
            return {""};
        if (n == 1)
            return {"0", "1", "8"};

        vector<string> prev = build(n - 2, totalLength);
        vector<string> result;

        for (string s : prev)
        {
            if (n != totalLength)
                result.push_back("0" + s + "0");
            result.push_back("1" + s + "1");
            result.push_back("6" + s + "9");
            result.push_back("8" + s + "8");
            result.push_back("9" + s + "6");
        }
        return result;
    }
};

int main()
{
    Solution sol;
    int n = 3;
    vector<string> res = sol.findStrobogrammatic(n);
    for (const string &s : res)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(5^(n/2)) - since 5 choices at each level for outer pair
// Space Complexity: O(5^(n/2))