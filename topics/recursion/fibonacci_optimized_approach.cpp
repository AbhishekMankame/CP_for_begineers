// Fibonacci Optimized Approach in C++
// This program calculates the nth Fibonacci number using an optimized approach.
// The Fibonacci sequence is defined as: F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2) for n > 1.
// In this implementation, we use an iterative approach to achieve linear time complexity.

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int a = 0, b = 1, c; // Initialize the first two Fibonacci numbers
    for (int i = 2; i <= n; i++)
    {
        c = a + b; // Calculate the next Fibonacci number
        a = b;     // Update a to the previous Fibonacci number
        b = c;     // Update b to the current Fibonacci number
    }
    return b; // Return the nth Fibonacci number
}

int main()
{
    int n;
    cin >> n;                     // Input the value of n
    cout << fibonacci(n) << endl; // Output the nth Fibonacci number
    return 0;
}

// Time Complexity: O(n) --> The time complexity is O(n) because we iterate from 2 to n, performing a constant amount of work for each iteration.
// Space Complexity: O(1) --> The space complexity is O(1) because we only use a fixed amount of space for the variables a, b, and c, regardless of the size of n.
// Note: This implementation is efficient for large n and avoids the exponential time complexity of the recrusive approach. In recursive implementations, the time complexity can grow exponentially due to repeated calculations of the same Fibonacci numbers.