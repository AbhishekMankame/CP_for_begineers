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

/*
Complexity details:
Timt complexity:
1. Sorting dominates: O(n log n)
2. Cost of comparator: __builtin_popcount(n) works in O(1) time
3. Total comparisons is sort: O(n log n)
TC --> O(n log n)

Space complexity:
- std::sort is in-place (introsort)
- uses recursion stack of depth: O(log n)
SC --> O(log n)
*/