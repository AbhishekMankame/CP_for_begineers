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