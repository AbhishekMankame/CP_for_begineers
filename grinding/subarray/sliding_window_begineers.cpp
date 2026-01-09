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



*/