// Missing number in array: Optimal approach 1

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;

    for(int i = 0; i < n - 1; i++) {
        sum2 += arr[i];
    }
    return sum1 - sum2;
}
int main() {
    int arr[4] = {1, 2, 3, 4};
    int n = 5;
    int ans = missingNumber(arr, n);
    cout << ans << endl;
}