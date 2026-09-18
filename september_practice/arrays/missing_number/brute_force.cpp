#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
    for(int i = 1; i <= n; i++) {
        int flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }
}
int main() {
    int arr[4] = {1, 2, 4, 5};
    int n = 5;
    int ans = missingNumber(arr, n);
    cout << ans << endl;
}

/*
Time Complexity: O(n * n) == O(n^2) in the worst case

Space Complexity: O(1)

*/