// https://www.geeksforgeeks.org/dsa/sum-of-elements-in-an-array-with-frequencies-greater-than-or-equal-to-that-element/

/*
Sum of elements in an array with frequencies greater than or equal to that element

Example:
Input: arr[] = {2, 1, 1, 2, 1, 6}
Output: 3
The elements in the array are {2, 1, 6}
Where,
    2 appear 2 times, which is greater than equal to 2 itself.
    1 appear 3 times, which is greater than 1 itself.
    But 6 appear 1 time which is not greater than or equal to 6.
So, sum = 2 + 1 = 3

Input: arr[] = {1, 2, 3, 3, 2, 3, 2, 3, 3}
Output: 6

Approach:
- Traverse the array and store the frequencies of all the elements in an unordered_map in C++ or equivalent data structure in any other programming language.
- Calculate the sum of elements having frequencies greater than or equal to that element.

*/

#include<bits/stdc++.h>
using namespace std;

int sumOfElements(int arr[], int n) {
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
    int sum = 0;

    for(auto it = m.begin(); it != m.end(); it++) {
        if(it->second >= it->first) {
            sum += it->first;
        }
    }
    return sum;
}

int main()
{
    int arr[] = { 1, 2, 3, 3, 2, 3, 2, 3, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sumOfElements(arr, n);

    return 0;
}

// TC: O(N)
// SC: O(N)