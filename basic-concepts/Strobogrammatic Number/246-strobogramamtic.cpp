/* LeetCode 246 - Strobogrammatic Number

Given a string `num` which represents a number, return `true` if `num` is a strobogrammatic number.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isStrobogrammatic(string num)
    {
        unordered_map<char, char> mapping = {
            {'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};

        int left = 0, right = num.size() - 1;
        while (left <= right)
        {
            if (mapping.find(num[left]) == mapping.end() || mapping[num[left]] != num[right])
                return false;

            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string num = "926";
    cout << (sol.isStrobogrammatic(num) ? "True" : "False") << endl;
    return 0;
}