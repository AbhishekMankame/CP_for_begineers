// Leetcode 246 - Strobogrammatic Number
// Easy

/*
A strobogrammatic number is a number that looks the same when rotated 180 degrees.
For example, 69 and 101 are strobogrammatic numbers, but 123 is not. The valid digits for a strobogrammatic number are: 0, 1, 6, 8, and 9.

To check if a number is strobogrammatic in C++, you can follow these steps:
1. Check the number from both ends.
2. For each digit, check if its pair from the opposite end forms a valid strobogrammatic pair.
3. The valid pairs are:
- 0 <-> 0
- 1 <-> 1
- 6 <-> 9
- 8 <-> 8
- 9 <-> 6


*/