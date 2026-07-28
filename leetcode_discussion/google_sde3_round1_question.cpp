// Google SWE 3 - Round 1 Question
/*
Found in leetcode discussion:
Recently I gave the google interview. This was the question which was asked. Can anyone help me what can be the optimized approach for this?

You are given a set of N unique 2D point coordinates (x,y) on the cartesian plane. Find the number of magical rectangles that can be formed with the given points.

A magical rectangle is an empty rectangular non-zero area parallel to the coordinate axes, delimited only by an upper left point and a lower right point, with no other points or within its area.

Examples:
Example 1:
Input: [ (10,0), (0,10) ]
Output: 1

Example 2:
Input: [ (0,0), (1,1), (2,2) ]
Output:0

Example 3:
Input: [ (2, 0), (1, 1), (0, 2) ]
Output: 2 (AB BC)

Example 4:
Input: [(0, 0), (1, 0)]
Output: 0

I was able to give only brute force approach which was N^3.

Result - No hire

*/