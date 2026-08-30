// https://leetcode.com/problems/contiguous-array/description/

// Leetcode 525 - Continuous Array

// Optimized approach using the approach `map with prefix sum`
#include<bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i:v) cin >> i;
    map<int, int> mp; // A particular sum occured for the first time at which index
    int ans = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(v[i] == 0) sum -= 1;
        else sum += 1; 
        if(sum == 0) ans = i+1;
        else {
            if(mp.find(sum)!=mp.end()) {
                ans = max(ans,i-mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }
        return ans;
    }

}