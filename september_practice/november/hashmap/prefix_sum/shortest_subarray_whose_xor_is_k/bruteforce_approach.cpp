/*
Given an array of size "N" -> Find the shortest subarray [i...j] whose bit-wise XOR is "K".
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;
    int min_length = INT_MAX;
    for(int i = 0; i < n; i++) {
        int xor_val = 0;
        for(int j = i; j < n; j++) {
            xor_val = xor_val ^ arr[j];
            if(xor_val == k) {
                int len = j - i + 1;
                min_length = min(min_length, len);
            }
        }
    }
    cout << min_length << endl;
    return 0;
}

// TC: O(N^2)
// SC: O(1)