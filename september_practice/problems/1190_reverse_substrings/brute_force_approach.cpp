// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/

// 1190: Reverse Substrings Between Each Pair of Parentheses

#include<bits/stdc++.h>
using namespace std;

string reverseParentheses(string s) {
    while(s.find("(") != string::npos) {
        int close = s.find(')');
        int open = s.rfind('(', close);
        reverse(s.begin() + open + 1, s.begin() + close);
        s.erase(close, 1);
        s.erase(open, 1);
    }
    return s;
}

/*
Time Complexity" O(n^2)
The key is that although `reverse()` itself is linear, the `erase()` operations on a `std::string` can also take O(n) because characters after the erased portion may need to be shfited.

Here loop processes one pair of parentheses at a time:
`while(s.find("(") != string::npos)`

There can be up to O(n) pairs of parentheses.

Inside each iteration:
- s.find("(") -> O(n)
- s.find(")") -> O(n)
- s.rfind('(', close) -> O(n) in the worst case
- s.erase(close, 1) -> O(n)
- s.erase(open, 1) -> O(n)

So, one iteration is O(n), and with up to O(n) iterations:
    O(n) * O(n) = O(n^2)

More precisely, because the string gets shorter after each iteration, you could describe it as:

O(n + (n - 2) + O(n - 4) + ... ) = O(n^2)

Space Complexity: O(n), Note: Auxiliary space: O(1)
The string itself takes O(n) space. reverse() uses O(1) auxiliary space.

*/