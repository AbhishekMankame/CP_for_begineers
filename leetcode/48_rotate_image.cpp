// Leetcode 48 - Rotate Image
/*You are given an `n*n` 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

Constraints:
n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000

Topics: Array Math Matrix
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void rotate(vector<int> &matrix){
        int row = matrix.size();
        for(int i=0;i<row;i++){
            for(int j=i;j<row;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};