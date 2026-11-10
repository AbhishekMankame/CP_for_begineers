/*
Given an array of size "N" -> count the number of subarrays[i ... j] whose bit-wise XOR is "K".
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;
    int count = 0;
    int xr = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        int req = xr ^ k;

        count += mp[req];
        mp[xr]++;
    }
    cout << count << endl;
    return 0;
}

// TC: O(N) average
// SC: O(N)

/*
Note: Interview tip: You can use `long long` for `count` and map frequencies if `N` is large, since the number of subarrays can reach: (N(N+1))/2

*/