// Codeforces Round 179 (Div 1)
// A. Greg and Array
// https://codeforces.com/contest/295/problem/A

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >>k;

    vector<ll> a(n + 1);
    
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    vector<int> l(m+1), r(m+1);
    vector<ll> d(m+1);

    for(int i=1;i<=m;i++){
        cin >> l[i] >> r[i] >> d[i];
    }

    // How many times should each operation be performed?
    vector<ll> cnt(m+2);

    for(int i=0;i<k;i++){
        int x,y;
        cin >> x >> y;
        cnt[x]++;
        cnt[y+1]--;
    }

    // Prefix sum -> actual number of times
    for(int i=1;i<=m;i++){
        cnt[i] += cnt[i-1];
    }

    // Apply operations using another difference array
    vector<ll> diff(n+2);

    for(int i=1;i<=m;i++){
        ll add = d[i]*cnt[i];

        diff[l[i]] += add;
        diff[r[i]+1] -= add;
    }

    // Prefix sum -> actual additions to each element
    for(int i=1;i<=n;i++){
        diff[i] += diff[i-1];
        a[i] += diff[i];

        cout << a[i] << " ";
    }
    cout << endl;
}

/*
Time Complexity: O(n + m + k)
- Reading the array -> O(n)
- Reading 'm' operations -> O(m)
- Reading 'k' queries -> O(k)
- Prefix sum over operations -> O(m)
- Applying all operations -> O(m)
- Prefix sum over the final array -> O(n)

So, O(n + m + k)

Space Complexity: O(n + m)

We store
- a -> O(n)
- diff -> O(n)
- l, r, d -> O(m)
- cnt -> O(m)

Therefore -> O(m + n)

*/