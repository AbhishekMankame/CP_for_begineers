// Subarray

/*
Note: Hard problems feel easy only after patterns become automatic.
So my goal is to make subarray patterns automatic in my brain.

What is subarray?
- A subarray is a continuous part of an array.

Eg: Array = [1,2,3]
Subarrays: [1], [2], [3], [1,2], [2,3], [1,2,3]
If it breaks continuously, then it is NOT a subarray.

Very very important (Golden Rule): If it's a subarray problem, indices are continuous --> think sliding window or prefix sum
*/

/*
Patterns 1: Generate all subarrays (Brute Force)
This is where everyone must start

Thinking:
- Fix a start
- Extend the end
- Every (start, end) pair is a subarray
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3};
    int n=arr.size();

    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

/*
Important:
- This is not useless
- Every optimized solution starts frrom THIS thinking
*/

/*
Sliding Window (MOST IMPORTANT)
Used when:
- Subarray is continuous
- Usually involves sum, length, or condition
- Mostly works when numbers are positive

Example 1:
Maximum sum subarray of size k
Array: [2,1,5,1,3,2], k=3
Answer:: 9 ([5,1,3])
*/

int maxSubarraySum(vector<int> &arr, int k){
    int windowSum=0,maxSum=0;
    for(int i=0;i<arr.size();i++){
        windowSum+=arr[i];
        if(i>=k-1){
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[i-(k-1)];
        }
    }
    return maxSum;
}

// Brain Shift: "I am not recalculating the sum, I am updating it."