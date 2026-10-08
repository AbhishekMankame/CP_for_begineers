// Count of frequencies of each element

#include <iostream>
#include <array>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 2, 5, 6, 6, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool vis[n] = {false};

    for(int i = 0; i < n; i++) {
        if(vis[i] == false) {
            int count = 1;
            vis[i] = true;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    vis[j] = true;
                    count++;
                }
            }
            cout << arr[i] << " ->  " << count;
            cout << endl;
        }
    }
}

/*
Time Complexity:
For each `i`, the inner loop checks the remaining elements.
Number of comparisons is roughly:
(n - 1) + (n - 2) + (n - 3) + ... + 1 which is n * (n - 1) / 2

Therefore: O(n^2)

Space Complexity:

We have created bool vis[n] = {false};
This array contains `n` elements, so it requires: O(n)

*/