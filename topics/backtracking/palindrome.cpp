// Leetcode 131 - Palindrome Partitioning
/*Given a string, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

Example 1:
Input: s = "aab"
Output: [["a", "a", "b"], ["aa", "b"]]

Example 2:
Input: s = "a"
Output: [["a"]]

Constraints:
1 <= s.length <= 16
s contains only lowercase English letters

Topics: Strings DP Backtracking

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for reverse
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s2 == s;
}

void getAllPart(string s, vector<string> &partition, vector<vector<string>> &ans)
{

    if (s.size() == 0)
    {
        ans.push_back(partition);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string part = s.substr(0, i + 1);
        if (isPalindrome(part))
        {
            partition.push_back(part);
            getAllPart(s.substr(i + 1), partition, ans);
            partition.pop_back();
        }
    }
}

int main()
{
    return 0;
}

// Time Complexity: O(n * 2^n) where n is the length of the string
// Space Complexity: O(n) for the recursion stack