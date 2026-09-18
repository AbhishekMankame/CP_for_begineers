// Missing number from array: Optimal approach 2

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i < n - 1; i++) {
        xor2 ^= arr[i];
        xor1 ^= (i + 1);
    }
    xor1 ^= n;
    return xor1 ^ xor2;
}
int main() {
    int arr[4] = {1, 2, 3, 4};
    int n = 5;
    int ans = missingNumber(arr, n);
    cout << ans << endl;
}