// Smallest subarray with sum >= x

/*
Given an array of positive integers and an integer x, find the length of the smallest contiguous subarray whose sum is >= X.
If no such subarray exists, return 0

Example:
arr = [2,3,1,2,4,3]
X=7
Output = 2 // [4,3]

Key observation: (MOST IMPORTANT)
- All numbers are POSITIVE
This single fact tells you:
- Variable-size Sliding Window
- O(n) time, O(1) space
If negative were allowed --> this approach FAILS

Idea in one line: Expand the window until sum >= X, then shrink it from the left to make it as small as possible.

Step by step logic:
1. Start with: left = 0, sum = 0, minLen = Infinite
2. Move right from 0 to n-1: Add arr[right] to sum
3. While sum>=X:
- Update answer
- Remove arr[left]
- Move left forward

*/

#include<iostream>
#include<vector>
#include<algorithm>

int smallestSubarrayWithSum(int x, vector<int>& arr){
    int left=0,sum=0,minLen=INT_MAX;

    for(int right=0;right<arr.size();right++){
        sum+=arr[right];
        while(sum>=X){
            minLen=min(minLen,right-left+1);
            sum-=arr[left];
            left++;
        }
    }
    return minLen==INT_MAX?0:minLen;
}