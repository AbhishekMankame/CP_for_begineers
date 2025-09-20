// Leetcode 1572 --> Matrix Diagonal Sum
/*Given a square matrix mat, return the sum of matrix diagonals.
Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

Example 1:
Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: 25
Explanation: Diagonals sum: 1+5+9+3+7=25
Notice that element mat[1][1] = 5 is count only once.

Example 2:
Input: mat = [[1,1,1,1],[1,1,1,1],[1,1,1,1],[1,1,1,1]]
Output: 8

Example 3:
Input: mat = [[5]]
Output: 5

Constraints:
- n == mat.length == mat[i].length
- 1 <= n <= 100
- 1 <= mat[i][j] <= 100

Topics: Array, Matrix
*/

#include<iostream>
#include<vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat){
    int sum=0;
    int n=mat.size();
    for(int i=0;i<n;i++){
        sum+=mat[i][i] + mat[i][n-1-i];
    }

    return n%==0?sum:sum-mat[n/2][n/2];
}

// Time Complexity: O(n) because we are iterating through each row once to collect the diagonal elements.
// Space Complexity: O(1) regardless of the size of the matrix, here no additional data structures (like arrays, vectors, or maps) are used.