/* Print all possible pairs of integers in an array with distinct integers.
Example:
Array = {1, 2, 3}
Result: (1,1), (1,2), (1,3), (2,2), (2,3), (3,3)
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") "; // Print pairs (i, j)
        }
        cout << endl;
    }
}