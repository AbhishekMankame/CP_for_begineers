// 2-Dimensional prefix sum

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i];
        }
    }
    vector<vector<int>> pref(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pref[i][j]=arr[i][j];
            if(i>0) pref[i][j]+=pref[i-1][j];
            if(j>0) pref[i][j]+=pref[i][j-1];
            if(i>0 && j>0) pref[i][j]+=pref[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<pref[i][j]<<" ";
        }
        cout<<endl;
    }
}