#include<bits/stdc++.h>
using namespace std;

int moduloFive(vector<int> &arr) {
    int n = arr.size();
    int count = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int rem = arr[i] % 5;
        int complement = (5 - arr[i]) % 5;
        if(mp.count(rem)) {
            count += mp[rem];
        }
        mp[arr[i]]++;
    }
    return count;
}

// TC: O(N)
// SC: O(1)