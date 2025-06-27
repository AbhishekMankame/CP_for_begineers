// Sliding Window in C++
/*Sliding window is a technique used to reduce the time complexity of problems involving arrays or strings, especially when dealing with contiguous subarrays or substrings.*/

/* When to Use it?
- When the problem asks for max/min/sum/average over a subarray of fixed or variable size.
- Instead of recalculating from scratch every time, we slide a window and reuse previous computations.

*/

#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < k)
    {
        return -1;
    }
    int windowSum = 0;
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++)
    {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Max sum of subarray of size " << k << " is " << maxSumSubarray(arr, k) << endl;

    return 0;
}