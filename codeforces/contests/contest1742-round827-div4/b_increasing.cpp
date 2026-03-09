// https://codeforces.com/contest/1742/problem/b

// B. Increasing

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &i:a) cin>>i;
        set<int> st(a.begin(),a.end());
        if(st.size()==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}