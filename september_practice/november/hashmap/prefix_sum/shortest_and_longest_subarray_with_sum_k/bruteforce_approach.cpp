/*
Given an array of size "N" -> find the largest and shortest subarray [i ... j] with sum equal to "K" -> In case the answer is not possible print (-1, -1)

Note: Array is not sorted
If array was sorted, we could have used the "Two Pointer" algorithm.

A = [2, 2, 1, 4], Sum = 5
Output: 3, 2

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;
    // We need to output the longest and shortest subarray whose sum is "k"
    int shortest = INT_MAX;
    int longest = -1;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == k) {
                int diff = (j - i + 1);
                shortest = min(shortest, diff);
                longest = max(longest, diff);
            }
        }
    }
    if(longest == -1) {
        cout << "No subarray found with sum " << k << endl;
        cout << "Hence printing: (-1. -1)" << endl;
    }
    else {
        cout << "Longest subarray with sum " << k << " is: " << longest << endl;
        cout << "Shortest subarray with sum" << k << " is: " << shortest << endl;
    }

    return 0;
}

// TC: O(N ^ 2)
// SC: O(1)