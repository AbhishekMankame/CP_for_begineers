// https://codeforces.com/contest/1742/problem/C

// C - Stripes

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector<string> grid(8);
        for(auto &i:grid) cin>>i;
        bool isRed=false;
        for(auto i:grid){
            if(i=="RRRRRRRR"){
                isRed=true;
                break;
            }
        }
        cout<<(isRed?"R\n":"B\n");
    }
    return 0;
}