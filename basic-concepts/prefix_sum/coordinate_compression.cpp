/* Coordinate Compression

Coordinate compression is a technique used in DSA/CP to replace large or sparse values with smaller consecutive indices while preserving their relative ordering.

For example,

Original: 100, 5000, 20, 999999
Compressed: 1, 2, 0, 3

Here, the actual values are replaced by their rank after sorting:
20 --> 0
100 --> 1
5000 --> 2
999999 --> 3

Simple Definition to remember: Coordinate compression converts large values into smaller indices while maintaining their relative order, allowing us to efficiently use arrays and data structures like Fenwick Trees and Segment Trees.

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {100, 5000, 20, 5000, 999999};

    // Step 1: Copy the array
    vector<int> sorted = arr;

    // Step 2: Sort
    sort(sorted.begin(),sorted.end());

    // Step 3: Remove duplicates
    sorted.erase(unique(sorted.begin(),sorted.end()),sorted.end());

    // Step 4: Replace each value with its compressed index
    for(int i=0;i<arr.size();i++){
        arr[i] = lower_bound(sorted.begin(),sorted.end(),arr[i]) - sorted.begin();
    }

    // Print compressed array
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}

/*
Complexity details:
1. Copying the array
Time: O(N)
Space: O(N)

2. Sorting
Time: O(N log N)

3. Removing duplicates
Note: 'unique()' scans through the vector once.
Time: O(N)

4. N*lower_bound --> O(N log N)

Total time complexity: O(N log N)

Space Complexity: O(N)


Interview Question:
"What is the complexity of coordinate compression?"
The standard coordinate compression approach takes O(N log N) time because we sort the values in O(N log N) and perform N binary searches, each taking O(log N).
The extra space complexity is O(N).

*/