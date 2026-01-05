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

/*
Let's go through the above code indetail (step by step explanation)
1. Variables
int windowSum=0;
int maxSum=0;

- windowSum --> sum of the current window
- maxSum --> best (maximum) window sum seen so far

Think: "windowSum always represents the sum of elements inside the current window."

2. The loop
for(int i=0;i<arr.size();i++)
- i is the right end 
At each step: we expand the window to the right

3. Add current element
window += arr[i]
You are saying: "include arr[i] in my window."
Now the window temorarily grows.

4. When does the window become valid?
if(i>=k-1)
- This is VERY IMPORTANT

why k-1?
- window size = k
- Find valid window ends at index k-1

Example:
k=3
indicies: 0 1 2

So
- Before i=k-1, window size < k --> ignore
- Fromi=k-1 onward --> window size = k

5. Update the answer
maxSum = max(maxSum, windowSum);

Now the window size is exactly k:
- compare current window sum
- store the maximum

6. Slide the window forward
window -= arr[i - (k-1)];
This line is the magic

what is i-(k-1)?

current window:
end = i
size = k
start = i-k+1

so start = i - (k-1)
We are removing left most element of the window.
Think: "I've used the window, now remove the oldest element and move forward."
*/