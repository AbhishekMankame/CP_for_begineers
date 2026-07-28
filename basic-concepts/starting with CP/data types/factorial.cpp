#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= i; // Multiply ans by i for each iteration
    }
    cout << ans << endl; // Output the final result
    return 0;
}