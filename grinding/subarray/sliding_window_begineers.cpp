/*
Sliding Window 
It is an algorithmic technique used to efficiently process contiguous subarrays or substrings by maintaining a window of elements that moves forward step by step, instead of recomputing results from scratch for each position.
It reduces time complexity from O(n^2) to O(n) in many problems.

### When to use Sliding Window
Use sliding window when:
- The problem involves subarray/substring
- Elements must be contiguous
- You need:
    - Maximum/minimum
    - sum/average
    - length/count
    - constraints like at most k, exactly k, no repeating
Do not use sliding window if elements are not contiguous

### Core Idea (Intution)
Instead of recalculating values for every position:
- Add the new element entering the window (right side)
- Remove the element leaving the window (left side)
- Update the answer using the current window
This reuse of previous computation makes it efficient.

### Types of Sliding Window
1. Fixed Size Sliding Window
- Window size is constant (k)
- Used when the problem explicitly mentions size 'k'
Example problems:
- Maximum sum of subarray of size 'k'
- Average of subarrays of size 'k'

Key operation:
add right element
remove left element

2. Variable Size Sliding Window
- Window size changes dynamically
- Used when conditions must be satisified
Example:
- Longest substring without repeating characters
- Longest substring with at most K distinct characters
- Minimum size subarray sum

Key Operation:
expand window until condition breaks
shrink window until condition is satisfied


### General Sliding Window Template

left = 0;

for(int right=0;right<n;right++){
    // 1. include right element in the window

    while(window condition is broken){
        // 2. remove left element from the window
        left++;
    }      
    // 3. update answer using current window
}

### One-Line Notes Version - Sliding Window applies when elements are contiguous, the window can be incrementally updated, and shrinking the window restores validity, allowing a linear traversal.

### Interview Tip
If asked "Why sliding window?", say: "Because the problem involves contiguous elements and the condition can be maintained by expanding and shrinking the window in one pass."

*/