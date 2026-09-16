// Remove duplicate elements from the array using 2 pointers approach

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
    int i = 0;
    for(int j = i; j < n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

// TC: O(n)
// SC: O(1)