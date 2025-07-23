// Printing numbers from n to 1 using recursion
// This program takes an integer n as input and prints the numbers from n down to 1 using recursion.

#include <iostream>
using namespace std;

void printNum(int n)
{
    if (n <= 1)
    {
        cout << n;
        return;
    }
    cout << n << " ";
    printNum(n - 1);
}