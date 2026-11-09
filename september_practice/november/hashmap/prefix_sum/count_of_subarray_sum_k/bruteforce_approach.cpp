#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[n] = {2, 3, 3, 5, 2, 2, 3, 2, 2, 1};
    int count = 0;
    int k = 8;

    for(int i = 0; i < n; i++) {
        int sum = 0;

        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == k) {
                count ++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

/*
Time Complexity: O(n^2)
- Outer loop runs `n` times.
- Inner loop runs up to `n` times.
- The operations inside the inner loop take constant time, O(1).

TC = O(n * n) = O(n ^ 2)

Space Complexity:
We are using only a few extra variables: count, sum, i, j, k
No additional data structure is used.

SC = O(1)

*/