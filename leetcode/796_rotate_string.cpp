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