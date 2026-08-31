/*
Example:

Given an array with all 0s initially perform the following Q queries on it.
In the ith query you will be given 3 integers: Li, Ri, Xi. You need to add Xi, to all the values in the array from the index Li to Ri.
After performing all the queries print the final state of the array.

*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int q;
    cin >> q;
    while(q--) {
        int l,r,x;
        cin >> l >> r >> x;
        for(int i=l;i<=r;i++){
            v[i] += x;
        }
    }
    for(int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Time Complexity: O(n*q)