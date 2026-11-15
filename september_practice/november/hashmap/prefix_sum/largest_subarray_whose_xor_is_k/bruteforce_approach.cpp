/*
Given an array of size "N", find the largest subarray[i...j] whose bitwise xor is "K"
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;
    int longest = 0;
    for(int i = 0; i < n; i++) {
        int xorValue = 0;
        for(int j = i; j < n; j++) {
            xorValue ^= arr[j];
            if(xorValue == k) {
                int len = j - i + 1;
                longest = max(longest, len);
            }
        }
    }
    cout << longest << endl;
    return 0;
}

// Time Complexity: O(N^2) - Two nested loops
// Space Complexity: O(1) - Only a few extra variables