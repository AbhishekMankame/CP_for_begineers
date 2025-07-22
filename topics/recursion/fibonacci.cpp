// Fibonacci Number using Recursion
// This program calculates the nth Fibonacci number using recursion.
// The Fibonacci sequence is defined as: F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2) for n > 1.
// This implementation is not efficient for large n due to its exponential time complexity.

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}

// Time Complexity: O(n) --> The time complexity is O(2^n) because the function makes two recursive calls for each n greater than 1, leading to an exponential growth in the number of calls.
// Space Complexity: O(n) --> The space complexity is O(n) due to the call stack used for recursion, which can go up to n levels deep in the worst case.
// Note: This implementation is not efficient for large n due to the exponential time complexity. For larger values of n, consider using memoization or an iterative approach to improve performance.