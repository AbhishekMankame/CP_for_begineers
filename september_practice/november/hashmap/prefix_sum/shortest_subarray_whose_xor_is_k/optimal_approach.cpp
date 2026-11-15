/*
Given an array of size "N" -> Find the shortest subarray [i...j] whose bit-wise XOR is "K".
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;
    int min_length = INT_MAX;
    int xor_val = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;
    for(int i = 0; i < n; i++) {
        xor_val = xor_val ^ arr[i];
        int req = xor_val ^ k;
        if(mp.find(req) != mp.end()) {
            int len = i - mp[req];
            min_length = min(min_length, len);
        }
        mp[xor_val] = i;
    }
    cout << (min_length == INT_MAX ? -1 : min_length) << endl;
    return 0;
}

// TC: O(N)
// SC: O(N)