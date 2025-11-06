// Leetcode 3609 - Minimum Moves to Reach Target in Grid
// Hard

/*
You are given four integers sx, sy, tx and ty, representing two points (sx, sy) and (tx, ty) on an infinitely large 2D grid.

You start at (sx, sy).
At any point (x, y), define m=max(x,y). You can either
- Move to (x + m, y), or
- Move to (x, y + m).

Return the minimum number of moves required to reach (tx, ty). If it is impossible to reach the target, return -1.

Example 1:
Input: sx=1, sy=2, tx=5, ty=4
Output: 2
Explanation:
The optimal path is:
- Move 1: max(1,2)=2. Increase the y-coordinate by 2, moving from (1,2) to (1,2+2) = (1,4)
- Move 2: max(1, 4) = 4. Increase the x-coordinate by 4, moving from (1, 4) to (1 + 4, 4) = (5, 4).

Thus, the minimum number of moves to reach (5,4) is 2.

*/