// Leetcode 796 - Rotate String
// https://leetcode.com/problems/rotate-string/description/

#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal){
    if(s.size()!=goal.size()) return false;
    s+=s;
    if(s.find(goal)!=string::npos) return false;
    else return true;
}

/*
Complexity details:

Time Complexity:
1. Length check: if(s.size()!=goal.size()) return false;
- Takes O(1)

2. String concatenation: s+=s;
- Creates a new string of size '2n'
- Takes O(n)

3. Substring search: s.find(goal)
- In C++, 'find()' typically uses a naive or optimized search (implementation-dependent)
- Worst-case: O(n*m) -> here 'm=n', so O(n^2)
- Average case (with optimizations): closer to O(n)

Final Time Complexity:
- Worst case: O(n^2)
- Average case: O(n)

Space Complexity
Extra space used:
- s+=s creates a string of size '2n'

Final space complexity: O(n)

*/