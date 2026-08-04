/*
Binary Search on Sorted Infinite Array

Given an infinite sorted array (or a sorted array with unknown size), the task is to find if a given number 'key' is present in the array or not. If the number is present, return its index; otherwise, return -1.)

Note: Since the array is considered infinite, we cannot use the traditional binary search approach directly.
Instead, we first need to find the range where the 'key' might be present. We can do this by exponentially increasing the index until we find an element greater than or equal to 'key'. Once we have found the range, we can perform a binary search within that range.
- Since the array is considered infinite, we do not know the size and therefore cannot access the last index.

Example:
Array:
Index : 0 1 2 3 4 5 6 7 8 9 ...
Value : 2 4 6 8 10 12 14 16 18 20 ...

Target = 14
Output = 6 (14 is present at index 6)

Example 2:
Array:
Index: 0 1 2 3 4 5 6 7 8 9 ...
Value: 1 3 5 7 9 11 13 15 17 19 ...
Target = 20
Output = -1 (20 is not present in the array)

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Normal binary search function
    int binarySearch(vector<int> &arr, int low, int high, int key) {
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] == key) {
            return mid;
        }
            else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }       
    }
    return -1; 
    }


    // Search in Infinite Array
    int searchInfiniteArray(vector<int> &arr, int key) {
        int low = 0;
        int high = 1;

        // Find the search range
        while(high < arr.size() && arr[high] < key) {
            low = high + 1;
            high = high * 2;
        }

        // If high crosses the array boundary
        high = min(high, (int)arr.size()-1);

        // Apply Binary Search
        return binarySearch(arr, low, high, key);
    }
};

int main() {
    vector<int> arr = {2,4,6,8,10,12,14,16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40};
    int target = 26;

    Solution obj;
    int result = obj.searchInfiniteArray(arr, target);
    if(result!=-1)
        cout << "Element found at index: " << result << endl;
    else cout << "Element not found"
 << endl;

 return 0;
}

/*
Complexity Details:

## Time Complexity:
We have two phases:
1. Finding the search range (expanding window)
2. Performing binary search inside that range

1. Finding the search range (Exponential Expansion)

Code:
int low = 0;
int high = 1;

while(arr[high] < target) {
    low = high + 1;
    high = high * 2;
}

Here 'high' grows like: 1 2 4 8 16 32 64 .....

Suppose the target is present at index 'p'

Example: Target is at index 1000

The expansion happens:
1
2
4
8
16
32
64
128
256
512
1024 <-- reached target range

How many times did we double?
Mathematically: 2^k >= p
Taking log: k >= log(p)

So the range expression takes: O(log p)
where p = position/index of the target.

2. Binary Search Complexity:
After expansion, we have a range:
low ------------- high
Example: 512 ----------- 1024

The formula to find the number of elements in a range is: 
Number of elements = high - low + 1

This is because both 'low' and 'high' are included in the range.

Size of this range is approximately: O(p)

Now we apply normal binary search:

while(low <= high) {
    mid = low + (high-low)/2;
}

Each iteration cuts the search space in half:
1024
512
256
128
64
32
16
8
4
2
1

Therefore: Binary Search = O(log p)

Total Time Complexity:
We add both phases:

Finding range = O(log p)
Binary Search = O(log p)
Total = O(log p) + O(log p) = O(log p)

Therefore, Time Complexity ==> O(log p)
Where 'p' is the index of the target.
*/

/*
Most important note:
The formula to find the number of elements in a range is: 
Number of elements = high - low + 1

This is because both 'low' and 'high' are included in the range.
*/
