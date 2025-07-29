// To check if the given array is sorted or not
#include <iostream>
#include <vector>
using namespace std;

// check if array is sorted
bool isSorted(vector<int> arr, int n)
{
    if (n == 0 || n == 1)
        return true;

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << isSorted(arr, n) << endl;
    return 0;
}

// Time Complexity: O(n) --> The time complexity is O(n) because we are checking each element of the array recursively, leading to n recursive calls.
// Space Complexity: O(n) --> The space complexity is O(n) due to the recursive call stack, which can go as deep as n levels in the worst case.
// Note: This implementation checks if the array is sorted in non-decreasing order. It compares each element with the previous one and recursively checks the rest of the array.
// How this code works: The function `isSorted` checks if the last element is greater than or equal to the second last element and then recursively calls itself with the rest of the array. If it reaches the base case where the size of the array is 0 or 1, it return true, indicating that the array is sorted.