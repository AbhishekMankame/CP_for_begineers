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

/*Problem> Generate All Subsets (Power Set)*/
#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> &nums, int index, vector<int> &current, vector<vector<int>> &result)
{
    // Base case: we've reached the end of the array
    if (index == nums.size())
    {
        result.push_back(current); // Save the current subset
    }

    // Choice 1: Include nums[index]
    current.push_back(nums[index]);
    backtrack(nums, index + 1, current, result);

    // Backtrack: remove the last added element
    current.pop_back();

    // Choice 2: Exclude nums[index]
    backtrack(nums, index + 1, current, result);
}