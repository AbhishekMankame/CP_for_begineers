// Leetcode - 1356
// Easy
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/

#include<bits/stdc++.h>
using namespace std;

vector<int> sortByBits(vector<int>& arr){
    sort(arr.begin(),arr.end(),[](int a, int b)
    {
        int ca = __builtin_popcount(a);
        int cb = __builtin_popcount(b);
        return (ca==cb)?a<b:ca<cb;
    });
    return arr;
}