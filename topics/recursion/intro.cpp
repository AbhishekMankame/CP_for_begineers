// Recursion: A function that calls itself to solve a problem
// Example: Factorial of a number using recursion

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}

// Time Complexity: O(n) --> The time complexity is O(n) because the function makes n recursive calls, each performing a constant amount of work.
// Space Complexity: O(n) --> The space complexity is O(n) due to the call stack used for recursion, which can go up to n levels deep in the worst case.