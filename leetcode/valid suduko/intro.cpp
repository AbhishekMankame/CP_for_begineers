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
    return true;    // No violations found
}

int main() {
    // Example Sudoku board, '.' represents empty cells
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '8', '.', '6', '.', '.', '3'},
        {'4', '.', '9', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '5', '.'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if(isValidSudoku(board)){
        cout << "The Sudoku is valid." << endl;
    }
    else {
        cout << "The Sudoku is not valid." << endl;
    }

    return 0;
}

/*
Time Complexity:
The code performs three main validation steps:

a. Row and Colum Checks
--> Outer loop runs 9 times (for each row)
--> Inner loop also runs 9 times (for each colums)
--> So, toatl operations = 9x9 = 81
Each insertion and lookup in an unordered_set takes O(1) on average (amortized constant time).
Thus, this entire part runs in O(81x1) = O(81) === O(1) (since Sudoku is fixed-size).

b. Subgrid (3x3) Checks
--> The outer two loop iterate over the 9 subgrids (each 3x3 block)
--> The inner two loop iterate over 9 elements per subgrid
--> So, total operations = 9*9 = 81

Again, each set insertion/check is O(1) on average
Therefore, subgrid checking also runs in O(81*1) = O(81) === O(1)

Total Time Complexity:
Combine all three parts:
O(81) [rows + colums] + O(81) [subgrids] = O(162) === O(1)

Since Sudoku is always 9x9, the total number of cells is constant (81),
so the overall time complexity is O(1) (constant time)

If you generalize it for an NxN Sudoku (where N=9), then the complexity becomes O(N^2) - because you check every cell once.


Space Complexity:
Let's analyze auxiliary (extra) memory usage.
- For each row and column iteration, you create two unordered_set<char> containers:
    - Each can store upto 9 elements (digits 1-9)
    - Memory per set is O(9) = O(1) (constant)

- For subgrid validation, you again create one unordered_set<char> per subgrid (also upto 9 elements)
    - This is also O(1) per subgrid.

At any point, only a few set exist simulataneously (rowSet, colSet, subgridSet), so the total auxiliary space used in O(1) constant.


*/