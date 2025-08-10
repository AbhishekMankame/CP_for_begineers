// Here we are finding the second largest element in the array
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN, sec_largest = largest;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] != largest)
        {
            sec_largest = arr[i];
        }
    }
    if (sec_largest == INT_MIN)
        cout << "No second largest element" << endl;
    else
        cout << "The second largest element is " << sec_largest << endl;

    return 0;
}

// Time Complexity: O(n) --> We are traversing the array only once.
// Space Complexity: O(1) --> We are using only a constant amount of space.