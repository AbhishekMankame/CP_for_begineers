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

/*
Summary of Difference:
- Lower bound(std::lower_bound): The first position where the element is not less than the target.
- If the element is present, it points to the first occurrence.
- If the element is not present, it points to the position where the element can be inserted.

- Upper bound(std::lower_bound): The first position where the element is greater than the target.
- If the element is present, it points to the position after the last occurrence.
- If the element is not present, it points to the position where the element can be inserted.
*/

// Complexity: Both lower bound and upper bound operations have a time complexity of O(log n) because they are based on binary search.

/*
Applications of Lower and Upper Bound:
- Counting occurrences: By using lower_bound and upper_bound, you can easily count the number of times an element appears in a sorted array by calculating the difference between the two bounds.
Example: The number of occurrences of 5 in the array [1,3,3,5,5,7,9] can be found by calculating the difference between upper_bound(5) and lower_bound(5).

*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,3,3,5,5,7,9};

    // Count occurrences of 5
    auto lower = lower_bound(arr.begin(),arr.end(),5);
    auto upper = upper_bound(arr.begin(),arr.end(),5);
    int count = upper - lower;

    cout << "The element 5 appears "<<count<<" times in the array."<<endl;
    return 0;
}