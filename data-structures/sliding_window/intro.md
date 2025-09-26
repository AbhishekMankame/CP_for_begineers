## Sliding Window Technique
Sliding window technique is a method used to solve problems that involve subarray or substring or window.
- Instead of repeatedly iterating over the same elements, the sliding window maintains a range (or "window") that moves step-by-step through the data, updating results incrementlly.
- The main idea is to use the results of previous window to do computations for the next window.
- Commonly used for problems like finding subarrays with a specific sum, finding the longest substring with unique characters, or solving problems that require a fixed-size window to process elements efficiently.

### How to use Sliding Window Technique?
There are basically two types of sliding window:
1. Fixed Size Sliding Window:
The general steps to solve these questions by following below steps:
- Find the size of the window required, say K.
- Compute the result for 1st window, i.e. include the first K elements of the data structure.
- Then use a loop to slide the window by 1 and keep computing the result window by window.

2. Variable Size Sliding Window:
The general steps to solve these questions by following below steps:
- In this type of sliding window problem, we increase our right pointer one by one till our condition is true.
- At any step if our condition does not match, we shrink the size of our window by increasing left pointer.
- Again, when our condition satisfies, we start increasing the right pointer and follow step 1.
- We follow these steps until we reach to the end of the array.

### How to Identify Sliding Window Problems?
- These problems generally require Finding Maximum/Minimum Subarray, Substrings which satisfy some specific condition.
- The size of the subarray or substring 'k' will be given in some of the problems.
- These problems can easily be solved in O(n^2) time complexity using nested loops, using sliding window we can solve these in O(n) time complexity.
- Required Time Complexity: O(n) or O(n log n)
- Constraints: n <= 10^6