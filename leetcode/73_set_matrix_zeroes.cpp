// Leetcode 73 --> Set matrix zeroes

/*Given an m*n integer matrix 'matrix', if an element is 0, set its entire row and column to 0's.
You must do it 'in place'.

Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Constraints:
- m==matrix.length
- n==matrix[0].length
- 1<=m,n<=200
- -2^31 <= matrix[i][j] <= 2^31-1

Topics: Array, Hash Table, Matrix
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                helper(i,j,matrix);
            }
        }
    }
}