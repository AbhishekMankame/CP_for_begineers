// Lower bound and upper bound using STL 

/*
Lower Bound - In C++, the std::lower_bound() function is used to find the position of the first element in the sorted array that is greater than or equal to a given value.
In other words, it returns an iterator pointing to the smallest element in the range that is not less than the target value.
If all elements in the range are smaller than the target, it returns an iterator pointing to the end of the range. This function is commonly used to find the insertion position of an element in a sorted array while maintaing order, or to locate the starting index of a specific value.
Internally, it uses binary search, so its time complexity is O(log n) and space complexity is O(1).

Upper Bound - The std::upper_bound() function in C++ returns an iterator pointing to the first element in a sorted range that is strictly greater than a given value.
This means it identifies the position where the next greater element appears after all occurrences of the target value.
If all elements in the range are less than or equal to the target, it returns an iterator pointing to the end of the range.
The function is ofter used along with lower_bound() to determine the range of indices where a particular value occur or to count the frequency of a given element in a sorted array. Like lower_bound(), it performs a binary search achieving a time complexity of O(log n) and space complexity of O(1).


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

#include<iostream>
#include<vector>
#include<algorithm> // for lower_bound, upper_bound
using namespace std;

int main() {
    vector<int> v = {1,2,4,4,5,7,8,10};
    int target=4;

    // lower_bound returns the first element >= target
    auto lb = lower_bound(v.begin(), v.end(), target);

    // upper_bound returns the first element > target
    auto ub = upper_bound(v.begin(), v.end(), target);

    cout<< "Array: ";
    for(int x:v) cout << x << " ";
    cout << endl;

    std::cout << "Target: " << target << "\n";
    std::cout << "Lower bound index: " << (lb - v.begin()) << "\n";
    std::cout << "Upper bound index: " << (ub - v.begin()) << "\n";

    return 0;
}