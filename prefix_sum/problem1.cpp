/*
Given an array of N elements, answer the following queries:
Query: L to R
Result: A[L] + 2*A[L+1] + 3*A[L+2] + ...

*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n+1);

    for(int i=1;i<=n;i++) {
        cin>> v[i];
    }
    vector<int> pre1(n,0), pre2(n,0);
    for(int i=1;i<=n;i++){
        pre1[i] = pre1[i-1] + (i*v[i]); 
        pre2[i] = pre2[i-1] + v[i];
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin >> l >> r;
        cout << (pre1[r] - pre1[l-1]) - (l-1)*(pre2[r]-pre2[l-1]) << " ";
    }
    cout << endl;
}

// Time Complexity: O(n + q)