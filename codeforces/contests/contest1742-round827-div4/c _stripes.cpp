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

/*
Complexity details:
1. Reading the grid
vector<string> grid(8);
for(auto &i:grid) cin>>i;

- 8 strings are read
- Each string has length 8

So total characters read per test case: 8*8=64
Time: O(64) = O(1)

2. Checking for "RRRRRRRR"

for(auto i:grid){
    if(i=="RRRRRRRR"){
        isRed=true;
        break;
    }    
}

- Loop runs atmost 8 times
- Each comparison compares strings of length 8
Cost per comparison: O(8)
Total: 8*8=64
Time: O(64) = O(1)

Time complexity per test case: O(64) + O(64) = O(1)
Since the grid size never changes, it is constant time.

Overall time complexity:
For 't' test cases: O(t)

Space Complexity:
The grid stores: 8*8=64 characters
So space is constant: O(1)
*/