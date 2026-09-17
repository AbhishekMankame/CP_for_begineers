/* 
Move all zeros to the end - Optimized approach
- Here we will be using `two pointers` approach

*/

#include <bits/stdc++.h>
using namespace std;

void nonZero(vector<int> &arr) {
    int n = arr.size();

    // Step 1: Finding the index (or position) of the first `0`
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = 1;
            j++;
        }
    }

    // Step 2: Swapping `non-zero` elements with `zeros`
    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    nonZero(arr);

    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}

/*
Time Complexity: O(x) + O(n - x) === O(n)
Space Complexity: O(1) --> We are not using any extra space here.

Note: We need to tell the interviewer that, we are modifying the given array

*/