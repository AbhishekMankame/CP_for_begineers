// Leetcode 1351 - Count Negative Numbers in a Sorted Matrix
// Easy

/*
Given a 'm*n' matrix 'grid' which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in 'grid'.

Example 1:
Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.

Example 2:
Input: grid = [[3,2],[1,0]]
Output: 0

Constraints:
- m == grid.length
- n == grid[i].length
- 1 <= m, n <= 100
- -100 <=grid[i][j]<= 100

Follow up: Could you find an O(n+m) solution?

Topics: Array, Binary Search, Matrix

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countNegative(vector<vector<int>> &grid){
    int m=grid.size();
    int n=grid[0].size();
    
    int row=0,col=n-1;
    int count=0;

    while(row < m && col >= 0){
        if(grid[row][col]<0){
            // All elements below grid[row][col] are negative
            count+=(m-row);
            col--;
        }
        else row++;
    }

    return count;
}

/*
The above one is Optimal Approach (O(m+n))
Start from the top-right corner and move:
- Left if the number is negative (all below are also negative)
- Down if the number is non-negative

Why this works:
Because rows and columns are sorted:
- If grid[r][c]<0, then all elements below it in that column are also negative.

Time Complexity: O(m+n)
Space Complexity: O(1)

*/


/*
Using binary search approach
- Binary Search per Row
- For each row, binary search the first negative number
- Time Complexity: O(m log n)
- Space Complexity: O(1)
*/