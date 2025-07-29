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
        else if (arr[mid] <= tar)
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