// Valid Sudoku

/*
To solve the problem of validating a Sudoku puzzle in C++, we need to ensure that the current state of the puzzle follows all Sudolu rules:
1. Each row must contain digits from 1-9 without repetition
2. Each column must contain digits from 1-9 without repetition.
3. Each 3x3 subgrid (box) must contain digits from 1-9 without repetition.

Here's how we can approach this:

Steps:
1. Check Rows: Ensure every rows has no duplicates.
2. Check Columns: Ensure every column has no duplicates.
3. Check 3x3 Subgrids: Ensure each 3x3 subgrid contains unique values.

Plan:
1. Iterate through each row, column and subgrid.
2. For rows and columns, we can simply track the numbers seen using a set or a boolean array.
3. For subgrids, we will need to determine the boundaries of each 3x3 box. A 3x3 box starts at indices (1*3, j*3) and contains elements from rows 3*i to 3*i+2 and columns 3*j to 3*j+2.

*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// Function to validate the Sudoku
bool isValidSudoku(vector<vector<char>>& board){
    // Check rows and columns
    for(int i=0;i<9;i++){
        unordered_set<char> rowSet;
        unordered_set<char> colSet;
        for(int j=0;j<9;j++){
            //Check row
            if(board[i][j]!='.' && !rowSet.insert(board[i][j]).second){
                return false; // Duplicates found in row
            }

            // Check column
            if(board[j][i]!='.'&&!colSet.insert(board[j][i]).second){
                return false;   // Duplicates found in column
            }
        }
    }

    // Check 3x3 subgrids
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            unordered_set<char> subgridSet;
            for(int r=i;r<i+3;++r){
                for(int c=j;c<j+3;++c){
                    if(board[r][c]!='.' && !subgridSet.insert(board[r][c]).second){
                        return false; // Duplicates found in subgrid
                    }
                }
            }
        }
    }
}