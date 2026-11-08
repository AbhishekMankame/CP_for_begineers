// Problem 1: Given an array of size "N" and "Q" queries of the from (L, R) - for each query find the sum of elements in the range [L..R] in the array.

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> p(n);
    p[0] = arr[0];
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] + arr[i];
    }

    int query;
    cin >> query;
    for(int i = 1; i <= query; i++) {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        if(l == 0) sum = p[r];
        else sum = p[r] - p[l - 1];
        cout << sum << endl;
    }
}

// TC: O(N + Q)
// SC: O(N)