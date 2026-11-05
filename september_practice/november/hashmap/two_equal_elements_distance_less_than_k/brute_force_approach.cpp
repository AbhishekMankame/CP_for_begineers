/*
Check if there are any two equal numbers in an array at a distance less than or equal to k.

Brute Force Approach:
Just use 2 for loops and check if distance between any 2 equal elements is less than or equal to k, print(yes), otherwise, print(no).
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    vector<pair<int,int>> ans;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n && j <= i + k; j++) {
            if(a[i] == a[j]) {
                ans.push_back({i, j});
            }
        }
    }

    for(auto i : ans) {
        cout << "(" << i.first << " , " << i.second << ")" << endl;
    }

    return 0;
}

/*
Complexity details:

## Time Complexity: O(n*k)
- Input Reading: Reading the array takes O(n) time.
- Nested Loops:
    - The outer loop runs `n` times.
    - The inner loop runs at most `k` times for each element (since j <= i + k).
    - In the worst-case scenario (where k >= n), the inner loop runs down the remainder of the array, brining the total operations closer to O(n^2). However, tightly bounded by constraint `k`, the operation count is proportional to n*k, resulting in a time complexity of O(n*k).

- Output Printing: Printing the elements takes O(M) time, where M is the number of matching pairs found.

## Space Complexity: O(n + M)
- Array Storage: The `vector<int> a(n)` requires O(n) space to store the inputs.
- Result Storage: The `vector<pair<int, int>> ans` stores all pairs that meet your criteria. In the worst-case scenario (e.g., an array where all elements are identical and k >= n), it will store roughly n*k pairs. Thus, storing the output adds O(M) space, where M is the number of matching pairs.
*/