## Binary Search
Binary Search is a highly efficient algorithm for finding the position of a target element within a sorted dataset.<br>
It works by repeatedly dividing the search interval in half until the target is found or the interval is empty.<br>

Time Complexity: O(log n), as the search space is halved at each step.<br>
Space Complexity: O(1)

### Advantages:
1. Efficiency: Significantly faster than linear search for large datasets.
2. Deterministic: Always provides the correct result for sorted data.

### Disadvantages:
1. Requires the dataset to be sorted beforehead.
2. More complex to implement compared to linear search.
3. Not suitable for unsorted or dynamic datasets without additional preprocessing.