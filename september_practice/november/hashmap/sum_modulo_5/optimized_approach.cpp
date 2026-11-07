#include<bits/stdc++.h>
using namespace std;

int moduloFive(vector<int> &arr) {
    int n = arr.size();
    int count = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int rem = arr[i] % 5;
        int complement = (5 - rem) % 5;
        if(mp.count(complement)) {
            count += mp[complement];
        }
        mp[rem]++;
    }
    return count;
}

// TC: O(N) average.
// SC: O(1), since at most 5 distinct remainder can be stored.