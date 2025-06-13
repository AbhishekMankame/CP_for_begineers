/*Efficient approach 2 -  Using XOR */

#include<iostream>
using namespace std;

int oddCount(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << oddCount(arr, n) << endl;
}