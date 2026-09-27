// https://leetcode.com/problems/duplicate-zeros/description/

// 1089 - Duplicate Zeros

#include<bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int> &arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            // Shift elements to the right
            for(int j = n - 1; j > i; j--) {
                arr[i] = arr[j - 1];
            }

            // Duplicate the zero
            if(i + 1 < n) {
                arr[i + 1] = 0;
            }

            // Skip the newly inserted zero
            i++;
        }
    }
}

// TC: O(n ^ 2)
// SC: O(1)