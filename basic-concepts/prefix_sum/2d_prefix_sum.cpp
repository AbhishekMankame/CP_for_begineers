#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    vector<vector<int>>pre(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //pre[i][j] = pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1] + v[i][j];

            pre[i][j] = v[i][j];

            if(j>0) pre[i][j] += pre[i][j-1];
            if(i>0) pre[i][j] += pre[i-1][j];
            if(i>0 && j>0) pre[i][j] -= pre[i-1][j-1];
        }
    }
}