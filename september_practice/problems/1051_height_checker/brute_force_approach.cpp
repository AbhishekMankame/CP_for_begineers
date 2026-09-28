// https://leetcode.com/problems/height-checker/description/

// Leetcode 1051 - Height Checker: Brute Force Approach
// Here we will be taking one more array `sortedArray` and will copy the content of given array `heights` and then sort the `sortedArray` and compare each elements of both the array at the position `i`, if the value is different we will increase the value of the counter `count`. At last we will return the value of `count`.

#include<bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> sortedHeights = heights;
    sort(sortedHeights.begin(), sortedHeights.end());
    int count = 0;
    for(int i = 0; i < heights.size(); i++) {
        if(heights[i] != sortedHeights[i]) count++;
    }
    return count;
}

// TC: O(N log N) --> Sorting takes O(N log N) time.
// SC: O(N) --> Here auxiliary space is O(N) as we have taken extra array `sortedHeights`.