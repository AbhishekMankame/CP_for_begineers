#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int i=0,j=matrix[0].size()-1;
    while(i<matrix.size() && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target) j--;
        else i++;
    }
    return false;
}

// Time Complexity: O(m+n), where m = number of rows, n = number of columns
// Space Complexity: O(1) constant space