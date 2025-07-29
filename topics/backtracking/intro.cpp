// Backtracking Introduction
// Backtracking is a technique used to build all possible solutions to a problem incrementlly and abandon (or backtrack) when we realize we can't reach a valid solution.
// Eg: It's like exploring a maze: if you hit a dead end, you go back and try another path.

/* Where Backtracking is Used?
    - Generating all permutations/combinations
    - N-Queens problem
    - Suoku solver
    - Subset problems
    - Word search
*/

/*Core Idea:
Try --> Check --> Backtrack
1. Try to make a choice
2. Check if that choice leads to a vaid solution
3. If not, undo (backtrack) and try another choice
*/