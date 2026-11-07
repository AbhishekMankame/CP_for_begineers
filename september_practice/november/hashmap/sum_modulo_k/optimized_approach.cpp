/*
Given an array "nums" of size "N", find the total number of pairs(i, j) [i < j] such that (nums[i] + nums[j]) % k = 0 (nums[i] >= 0, k >= 2)
*/

#include<bits/stdc++.h>
using namespace std;

int moduloK(vector<int> &arr, int k) {
    int n = arr.size();
    unordered_map<int, int> mp;
    int count = 0;
    for(int i : arr) {
        // Find the remainder of the current number
        int rem = i % k;

        // Find what remainder is needed to make the sum divisible by k
        int complement = (k - rem) % k;

        // Add the number of previously seen elements with that remainder.
        count += mp[complement];

        // Store the current remainder for upcoming elements
        mp[rem]++;
    }
    return count;
}

// Time Complexity: O(N) average
// Space Complexity: O(min(N, k))