#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long K;
    cin >> K;

    // Prefix sum Array
    vector<long long> p(n);
    p[0] = a[0];

    for(int i = 1; i <= n - 1; i++) {
        p[i] = p[i - 1] + a[i];
    }

    // HashMap
    unordered_map<long long, long long> mp;

    mp[0] = 1;

    long long counter = 0;

    for(int j = 0; j < n; j++) {
        long long r = p[j] - K;
        counter = counter + mp[r];
        mp[p[j]]++;
    }
    cout << counter << endl;
    return 0;
}

// TC: O(n)
// SC: O(n)