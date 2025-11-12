// Lower bound and upper bound using STL 

/*
Lower Bound - In C++, the std::lower_bound() function is used to find the position of the first element in the sorted array that is greater than or equal to a given value.
In other words, it returns an iterator pointing to the smallest element in the range that is not less than the target value.
If all elements in the range are smaller than the target, it returns an iterator pointing to the end of the range. This function is commonly used to find the insertion position of an element in a sorted array while maintaing order, or to locate the starting index of a specific value.
Internally, it uses binary search, so its time complexity is O(log n) and space complexity is O(1).


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