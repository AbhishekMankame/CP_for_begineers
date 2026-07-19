/*
Maximum Sum Selection

You are given an integer array A of size N. Your task is to select exactly B elements from either the left end or the right end of the array A in order to maximize the sum of the selected elements.

Here are the details of the problem:

You are given an integer array A of size N where 1 <= N <= 10^5.
You need to select exactly B elements from either the left end or the right end of the array A.
The goal is to find and return the maximum possible sum of elements you can pick.

Input:

An integer array A of size N where each element A[i] satisfies -103 <= A[i] <= 103.
An integer B where 1 <= B <= N.
Output:

An integer representing the maximum possible sum of selected elements.

[5, -2, 3, 1, 2], 3 -> 8

*/

/*
A clean O(B) approach is to observe that if you pick exactly 'B' elements from the ends, then you can choose:
- '0' from left and 'B' from right
- '1' from left and 'B-1' from right
- '2' from left and 'B-2' from right
- ...
- 'B' from left and '0' from right
There are only 'B+1' possibilities.

## Algorithms
1. Compute the sum of the first 'B' elements (all picked from the left).
2. This is your initial answer.
3. Then, one by one:
    - Remove one element from the left-picked portion.
    - Add one element from the right end.
    - Update the maximum sum.


*/