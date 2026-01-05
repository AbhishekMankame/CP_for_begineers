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
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}

/*
Important:
- This is not useless
- Every optimized solution starts frrom THIS thinking
*/