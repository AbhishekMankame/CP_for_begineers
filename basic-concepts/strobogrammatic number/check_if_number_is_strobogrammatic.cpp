// Check if a number is strobogrammatic

/*
Approach:
1. Two pointers approach:
Use two pointers: one starting from the beginning(left) and the other from the end(right).
Check if the digits at left and right form a valid strobogrammatic pair (i.e, one of 0, 1, 6, 8, 9)
Move the left pointer forward and right pointer backward until they cross each other.

2. Valid pairs: The valid strobogrammatic pairs are:
0 <-> 0
1 <-> 1
6 <-> 9
8 <-> 8
9 <-> 6

3. Edge cases:
A single digit number can be strobogrammatic if it's 0, 1 or 8
An empty string or a string with invalid characters should return false


*/