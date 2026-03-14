// https://codeforces.com/contest/2208/problem/A

// A - Bingo Candies

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> freq;
        int mx=0;
        for(int i=0;i<n*n;i++){
            int x;
            cin>>x;
            mx=max(mx,++freq[x]);
        }
        if(mx<=n*n-n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}