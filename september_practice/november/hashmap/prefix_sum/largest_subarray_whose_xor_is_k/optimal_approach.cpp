/*
Given an array of size "N" -> Find the largest subarray [i...j] whose bit-wise XOR is "K".
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;
    int xor_val = 0;
    int max_length = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;
    for(int i = 0; i < n; i++) {
        xor_val = xor_val ^ arr[i];
        int req = xor_val ^ k;
        if(mp.find(req) != mp.end()) {
            int len = i - mp[req];
            max_length = max(max_length, len);
        }
        if(mp.find(xor_val) == mp.end()) mp[xor_val] = i;
    }
    cout << max_length << endl;
    return 0;
}

/*
Time Complexity: O(N) average
Space Complexity: O(N)

Note: In the worst case, unordered_map operations can take O(N), making the worst-case TC O(N^2).
*/