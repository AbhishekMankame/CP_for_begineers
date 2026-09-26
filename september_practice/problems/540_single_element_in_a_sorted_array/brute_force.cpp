// https://leetcode.com/problems/single-element-in-a-sorted-array/description/

// Leetcode 540: Single Element in a Sorted Array 

// We will solve it using brute force approach

#include <bits/stdc++.h>
using namespace std;

int singleDuplicate(vector<int> &nums) {
    int answer = 0;

    for(int i : nums) {
        answer = answer ^ i;
    }

    return answer;
}

// Time Complexity: O(n) --> As we have iterated the loop once which takes O(n) time.

// SC: O(1) --> We have not used any extra space