// Leetcode 392 - Is Subsequence

/*Given two strings `s` and `t`, return `true` is `s` is a subsequence of `t`, or `false` otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false

Constraints:
0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.
*/

#include<iostream>
using namespace std;

class Solution {
    public:
    bool isSubsequence(string s, string t){
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }

        return i==s.size();
    }
};

/*Explanation:
- Use two pointers:
    - i for iterating over string s.
    - j for iterating over string t.
- If characters match (s[i]==t[j]), move both pointers forward.
- Else, only move j (keep searching in t)
- If i reaches s.size(), that means all characters of s were found in order in t.
*/