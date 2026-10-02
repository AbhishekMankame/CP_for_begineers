// Longest Subarray sum with K --> Brute Force approach

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int length = 0;

    for(int i = 0; i < a.size(); i++) {
        long long sum = 0;
        for(int j = i; j < a.size(); j++) {
            sum += a[i];
            if(sum == k) length = max(length, j - i + 1);
        }
    }
    return length;
}

// TC: O(N ^ 2)
// SC: O(1)