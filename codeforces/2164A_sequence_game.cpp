// http://codeforces.com/problemset/problem/2164/A

// 2164A - Sequence Game

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<ll> a(n);
        for(auto &x:a) cin>>x;
        ll x;
        cin>>x;

        ll mn=*min_element(a.begin(),a.end());
        ll mx=*max_element(a.begin(),a.end());

        if(x>=mn && x<=mx) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}