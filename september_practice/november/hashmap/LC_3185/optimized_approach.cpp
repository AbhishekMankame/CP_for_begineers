// https://leetcode.com/problems/count-pairs-that-form-a-complete-day-ii/

// 3185 - Count Pairs That Form a Complete Day 2

#include<bits/stdc++.h>
using namespace std;

long long countCompleteDayPairs(vector<int>& hours) {
    vector<int> arr(24, 0);
    long long count = 0;

    for(int hour : hours) {
        int rem = hour % 24;
        int req = (24 - hour) % 24;
        count += arr[req];
        arr[rem]++;
    }
    return count;
}

// TC: O(N)
// SC: O(1) --> No auxiliary space