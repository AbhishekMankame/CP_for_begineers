// Printing subsequence whose sum is k
// Example: Input: arr = [1,2,1], sum = 2
// Output: [1,1],[2]

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr = {1, 2, 1};
    int n = 3, sum = 2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);
    return 0;
}