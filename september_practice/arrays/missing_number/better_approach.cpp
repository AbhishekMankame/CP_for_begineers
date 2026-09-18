#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    int hash[n + 1] = {0};
    for(int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
    }
    for(int i = 1; i <= n; i++) {
        if(hash[i] == 0) return i;
    }
}
int main() {
    int arr[4] = {1, 2, 4, 5};
    int n = 5;
    int ans = missingNumber(arr, n);
    cout << ans << endl;
}