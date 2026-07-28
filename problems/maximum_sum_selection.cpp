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

Example:
A = [5, -2, 3, 1, 2], B = 3

Initial:
Left picks = [5, -2, 3]
Sum = 6

Replace from left with right:
Take 2 from right instead of 3
Sum = 6 - 3 + 2 = 5
Take 1 from right instead of -2
Sum = 5 - (-2) + 1 = 8
Take 3 from right instead of 5
Sum = 8 - 5 + 3 = 6

Maximum = 8

*/

#include<iostream>
#include<algorithm>
using namespace std;

int solve(vector<int> &A, int B) {
    int n = A.size();
    int currSum = 0;

    // Take first B elements from left
    for(int i=0;i<B;i++){
        currSum += A[i];
    }
    int ans = currSum;

    // Gradually replace left elements with right elements
    for(int i=1;i<=B;i++){
        currSum -= A[B-i]; // Remove from left
        currSum += A[n-i]; // Add from right
        ans = max(ans, currSum);
    }
    return ans;
}

/*
Time Complexity: O(B)
Space Complexity: O(1)
Since 'B<=N<=10^5, this easily fits within the constraints.
*/