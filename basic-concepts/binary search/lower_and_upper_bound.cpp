// Lower bound and upper bound
/*
Lower Bound:
The lower bound is the smallest index at which a given element cound be inserted in a sorted array such that the array remains sorted. This is typically used to find the first occurrence of a given value in a sorted array or determine the point the where a value should be inserted.
- This is the position of the first element that is not less than the target. In other words, it finds the first occurrence of the value if it's present in the array, or the position where the element can be inserted to maintain the sorted order.
- In C++, you can use, std::lower_bound from the STL to find this.

Upper Bound:
The upper bound is the smallest index at which a given element could be inserted such that all elements at or before that index are strictly less than the target value. In simple terms, it finds the position after the last occurrence of a value in a sorted array.
- This is the position of the first element that is greater the target value. If the element is present, it's the position just after the last occurrence of that value;
- In C++, you can use std::upper_bound to find this.
*/