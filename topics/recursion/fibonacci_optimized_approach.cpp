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