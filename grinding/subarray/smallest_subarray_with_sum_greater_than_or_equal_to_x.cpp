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

*/