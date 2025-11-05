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