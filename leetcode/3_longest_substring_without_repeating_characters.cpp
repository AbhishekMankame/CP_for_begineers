// Leetcode 3 --> Longest Substring without repeating characters

/*Given a string s, find the length of the longst substring without duplicate characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Constraints:
- 0 <= s.length <= 5 * 104
- s consists of English letters, digits, symbols and spaces.

Topics: Hash Table, String, Sliding Window
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_map<char, int> seen;
    int ret=0, slow=0, n=s.size();
    for(int fast=0;fast<n;fast++){
        if(seen.count(s[fast])!=0)  slow=max(slow, seen[s[fast]]+1);
        seen[s[fast]] = fast;
        ret = max(ret, fast-slow+1);
    }

    return ret;
}