#include<iostream>
using namespace std;

int getNthTerm(int a, int n, int d) {
    int res = a;
    for(int i = 0; i < n; i++) {
        res += d;
    }
    return res;
}

int main() {
    int a, n, d, t;
    cin>>t;
    while(t--) {
        cin >> a >> n >> d;
        cout << getNthTerm(a, n, d) << "\n";
    }
}

// Inefficient solution: Would cause TLE for large inputs
