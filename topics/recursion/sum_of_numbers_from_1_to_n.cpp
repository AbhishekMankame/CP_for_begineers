// Sum of numbers from 1 to n using recursion
// This program takes an integer n as input and calculates the sum of numbers from 1 to n using recursion.

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n <= 1)
        return n;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return n;
}

// Time Complexity: O(n) --> The time complexity is O(n) because the function makes a single recursive call for each number from n down to 1, leading to n calls in total.
// Space Complexity: O(n) --> The space complexity is O(n) due to the call stack used for recursion, which can go up to n levels deep in the worst case.
// Note: This implementation is straightforward and effective demonstrates the use of recursion to calculate the sum of numbers. It is efficient for moderate values of n, but for very large n, consider using an iterative approach to avoid deep recursion issues.