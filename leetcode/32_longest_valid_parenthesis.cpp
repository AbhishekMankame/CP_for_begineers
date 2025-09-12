// Leetcode 32 - Longest Valid Parentheses (Leetcode Hard)

/*Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
Example 3:

Input: s = ""
Output: 0

*/

#include<iostream>
#include<stack>
using namespace std;

int longestValidParentheses(string s){
    stack<int> tk;
    stk.push(-1); // base index for valid substring
    int maxLen=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            stk.push(i);
        }
        else {
            stk.pop();
            if(stk.empty()){
                stk.push(i); // reset base
            }
            else {
                maxLen = max(maxLen, i-stk.top());
            }
        }
    }
    return maxLen;
}

// TC: O(n)
// SC: O(n) for stack