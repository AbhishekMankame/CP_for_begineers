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