#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {2, 2, 1, 4};
    int k = 5;

    int longest = 0;
    int shortest = INT_MAX;

    unordered_map<int, int> first, last;

    first[0] = -1;
    last[0] = -1;

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        int req = sum - k;

        // Find longest subarray
        if(first.find(req) != first.end()) {
            int len = i - first[req];
            longest = max(longest, len);
        }

        // Find shortest subarray
        if(last.find(req) != last.end()) {
            int len = i - last[req];
            shortest = min(shortest, len);
        }

        // Store earliest occurrence
        if(first.find(sum) == first.end()) {
            first[sum] = i;
        }

        // Store latest occurrence
        last[sum] = i;
    }

    if(longest == 0) {
        cout << "No subarray found with sum " << k << endl;
    }
    else {
        cout << "Longest subarray: " << longest << endl;
        cout << "Shortest subarray: " << shortest << endl;
    }
    return 0;
}

// TC: O(N)
// SC: O(N)