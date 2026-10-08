// First and Last position of an element

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int firstIndex = -1;
    int lastIndex = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            firstIndex = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == target) {
            lastIndex = i;
            break;
        }
    }

    cout << "First Index of the target element: " << firstIndex << endl;
    cout << "Last Index of the target element: " << lastIndex << endl;

    return 0;
}

// TC: O(N) + O(N) == O(2 * N) == O(N)
// SC: O(1)