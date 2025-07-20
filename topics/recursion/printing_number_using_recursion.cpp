// Printing the numbers from 1 to n using recursion

#include <iostream>
using namespace std;

void printNumbers(int n, int current = 1)
{
    if (current > n)
    {
        return; // Base case: if current exceeds n, stop recursion
    }
    cout << current << " ";       // Print the current number
    printNumbers(n, current + 1); // Recursive call with the next number
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " are: ";
    printNumbers(n); // Start printing from 1 to n
    cout << endl;
    return 0;
}