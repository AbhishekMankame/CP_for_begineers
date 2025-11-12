// Lower bound and upper bound using STL 

/*
lower_bound: Finds the first position where value could be inserted without violating order. (First element >= target)
upper_bound: Find the first element strictly greater than target.

Eg: a = [1,2,4,4,4,5,7,9], target=4
lower_bound --> Points to first 4 -> index 2
upper_bound --> Points to first 5 -> index 5

Time Complexity: O(log n)
Space Complexity: O(1)

Analogy (Easy to Remember):
Think of a bookshelf sorted alphabetically:
- lower_bound("Harry") --> first book that starts at or after "Harry".
- upper_bound("Harry") --> first book that starts after all the "Harry" titles.
That's exactly what these functions do - they find boundaries around a value.
*/