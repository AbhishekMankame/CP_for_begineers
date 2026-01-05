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