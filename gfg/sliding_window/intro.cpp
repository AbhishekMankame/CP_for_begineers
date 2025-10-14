// Sliding Window Technique

/*
Sliding window technique is a method used to solve problems that involve subarray or substring or window.
- Instead of repeatedly iterating over the same elements. the sliding window maintains a range (or "window") that moves step-by-step through data, updating results incrementally.
- The main idea is to use the results of previous window to do computations for the next window.
- Commonly used for problems like finding subarrays with a specific sum, finding the longest substring with unique characters, or solving problems that require a fixed-size window to process elements efficiently.

*/

/*
Example - Maximum Sum of subarray with K elements

Given an array arr[] and an integer k, we need to calculate the maximum sum of a subarray having size exactly k.

Input: arr[] = [5,2,-1,0,3], k=3
Output: 6
Explanation: We get maximum sum by considering the subarray [5,2,-1]


Input  : arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4 
Output : 39
Explanation : We get maximum sum by adding subarray [4, 2, 10, 23] of size 4.
*/

// Naive Approach - O(n*k) Time and O(1) Space

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSum(vector<int>& arr, int k){
    int n = arr.size();
    int max_sum=INT_MIN;

    // Consider all blocks starting with i
    for(int i=0;i<n-k;i++){
        int current_sum=0;

        // Calculate sum of current subarray of size
        for(int j=0;j<k;j++){
            current_sum+=arr[i+j];
        }

        // Update result if required
        max_sum=max(max_sum,current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;

    cout << maxSum(arr, k) << endl;
    return 0;
}