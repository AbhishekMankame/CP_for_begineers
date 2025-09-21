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