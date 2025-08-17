// Leetcode 14. Longest Common Prefix

/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string ""

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Constraints:
1 <= strs. length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty

Topics: Array String Trie
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &str)
{

    if (str.empty())
        return "";

    sort(str.begin(), str.end());
    int n = str.size();
    string ans = "";

    string st = str[0], end = str[n - 1];

    for (int i = 0; i < min(st.size(), end.size()); i++)
    {
        if (st[i] != end[i])
        {
            break;
        }
        ans = ans + st[i];
    }
    return ans;
}

int main()
{
    vector<string> str = {"flower", "flowing", "flow"};
    cout << longestCommonPrefix(str);

    return 0;
}

// TC: O(n * log n * m), where n is the number of strings (str.size()), m be the maximum length of a string in the array.

// SC: O(m), where m is the maximum length of a string in the array.