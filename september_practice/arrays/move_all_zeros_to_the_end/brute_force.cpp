// Move all the zeros to the end

#include <bits/stdc++.h>
using namespace std;

void nonZero(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();

    for(int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }

    for(int i = nz; i < n; i++) {
        arr[i] = 0;
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
Time Complexity: O(n) + O(x) + O(n - x) === O(2n) === O(n)
Space Complexity: O(x), where `x` is the number of non-zero numbers.
At max it can be O(n) when the entire array do not have a single zero.

*/