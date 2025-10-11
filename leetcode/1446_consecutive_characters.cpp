// Leetcode 1446 --> Consecutive Characters

/*The power of the string is the maximum length of a non-empty substring that contains only one unique character.
Given a string s, return the power of s.

Example 1:
Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

Example 2: 
Input: s = "abbcccddddeeeeecba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.

Constraints:
- 1<=s.length<=500
- s consists of only lowercase English letters

Topics: string
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int maxPower(string s){
    int count=1;
    int maxCount=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]) count++;
        maxCount=max(maxCount,count);
        if(s[i]!=s[i+1]) count=1;
    }
    return maxCount;
}

// Time Complexity: O(n), where n is the size of the string
// Space Complexity: O(1)