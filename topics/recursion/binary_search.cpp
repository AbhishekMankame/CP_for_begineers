// Binary Search Recursive approach
#include <iostream>
#include <vector>
using namespace std;

// Helper function
int binSearch(vector<int> &arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] < tar)
        {
            return binSearch(arr, tar, mid + 1, end);
        }
        else
        {
            return binSearch(arr, tar, st, mid - 1);
        }
    }
    return -1;
}

int search(vector<int> &arr, int target)
{
    binSearch(arr, target, 0, arr.size());
}

// Time Complexity: O(log n) --> The time complexity is O(log n) because the search space is halved with each recursive call, leading to logarithmic growth in the number of operations relative to the size of the input array.
// Space Complexity: O(log n) --> The space compelxity is O(log n) due to the recursive call stack, which can go as deep as log n levels in the worst case, depending on the size of the input array.
// Note: This implementation performs a binary search on a sorted array to find the index of a targe element. It uses recursion to narrow down the search space until the target is found or the search space is exhausted.
// How this code works: The function `binSearch` takes the array, target value, start index, and end index as parameters. It calculates the middle index and checks if the middle element is equal to the target. If it is, it return the index. If the middle element is less than the target, it recursively searches the right half of the array; otherwise, it searches the left half. The function `search` is a wrapper that initializes the search with the full range of the array.