// Problem: Find maximum sum of any subarray of size k
/*Given an array of integers arr[] and a number k, find the maximum sum of any contiguous subarray of size k.

Input: arr = [2, 1, 5, 1, 3, 2], k=3
Output: 9

Explanation:
Subarray of size 3 are:
[2, 1, 5] -> sum = 8
[1, 5, 1] -> sum = 7
[5, 1, 3] -> sum = 9 <- max sum
[1, 3, 2] -> sum = 6
*/

#include<iostream>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int> &arr, int k){
    int n = arr.size();
    int window_sum=0;
    int max_sum=0;

    // sum of first `k` elements
    for(int i=0;i<k;i++){
        window_sum += arr[i];
    }
    max_sum = window_sum;

    // Slide the window
    for(int i=k;i<n;i++){
        window_sum += arr[i] - arr[i-k]; // Add next element, remove first element of previous window
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k=3;
    cout << "Maximum sum of subarray of size "<< k << " is "<<maxSumSubarray(arr, k) << endl;
    return 0;
}