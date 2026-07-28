// Leetcode 73 --> Set Matrix Zero

/*Optimized code*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

setZeros(vector<vector<<int>>& matrix){
    int m= matrix.size();
    int n=matrix[0].size();
    bool zeroFirstRow=false, zeroFirstCol=false;

    // Check first row
    for(int j=0;j<n;j++){
        if(matrix[0][j]==0){
            zeroFirstRow=true;
            break;
        }
    }

    // Check first column
    for(int i=0;i<m;i++){
        if(matrix[i][0]==0){
            zeroFirstCol=true;
            break;
        }
    }

    // Use first row and column as markers
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }

    // Apply markers
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
        }
    }

    // Zero first row if needed
    if(zeroFirstRow){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }

    // Zero first column if needed
    if(zeroFirstRow){
        for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
    }
}

/*Summary"
Here we are:
1. Scanning the first row and first colum to check if they contain any zeroes.
2. Usin the first row and column to mark zeroes in the rest of the matrix.
3. Updating the rest of the matrix based on those markers.
4. Zeroing out the first row and first column if needed.

Time Complexity: O(m*n)
- where m is the number of rows 
- n is the number of columns

Why?
Let's count each step
1. Step 1: Scan first row and column
    - O(m) for he first column
    - O(n) for the first row
    - O(m + n)
2. Step 3: Mark zeroes using first row/column
    - You loop over the rest of the matrix (excluding first row and column)
        -> O((m-1)*(n-1)) = O(m*n)
3. Step 3: Apply zeroes based on markers
    - Again loop over (m-1)*(n-1)=O(m*n)
4. Step 4: Zero out first row and column if needed
    - O(m+n)

Total = O(m+n) + O(m*n) + O(m*n) + O(m+n) = O(m*n)

Space complexity: O(1)
Why?
- You're modifying the matrix in-place.
- You use only two boolean flags: zeroFirstRow and zeroFirstCol
- No extra arrays, sets, or hashmaps.
*/