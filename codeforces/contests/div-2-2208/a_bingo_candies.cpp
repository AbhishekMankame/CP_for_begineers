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

/*
Complexity details:
For each test case:
1. We need n^2 elements.
2. For each element we:
    - Access unordered_map
    - Increment frequency
    - Compute max
Average complexity of unordered_map operations: O(1)
So total per test case: O(n^2)

Across all test cases:
The problem guarantees: sum of n <= 500
Worst case operations:
max n=100
n^2 = 10000
t<=500

But because of the constraint on total 'n':
Total work = O(500^2) = 250000 which is very small

Space complexity:
The map stores at most n^2 distinct colors.
Space = O(n^2)
Worst case:
n=100
n^2=10000

So the map holds at most 10000 keys.

*/