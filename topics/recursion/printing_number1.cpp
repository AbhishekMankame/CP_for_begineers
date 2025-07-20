#include <iostream>
using namespace std;

void numbers(int n)
{
    if (n <= 0)
        return;
    numbers(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    // cin >> n;
    numbers(4);
    return 0;
}

// Time Complexity: O(n) --> The time complexity is O(n) because the function makes n recursive calls, each performing a constant amount of work.
// Space Complexity: O(n) --> The space complexity is O(n) due to the call stack used for recursion, which can go up to n levels deep in the worst case.