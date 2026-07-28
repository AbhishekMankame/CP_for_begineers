#include <iostream>
using namespace std;

void bin(int n)
{
    if (n == 0)
        return;
    bin(n / 2);
    cout << (n % 2);
}

int main()
{
    int n;
    cin >> n;
    bin(n);
}

// Time Complexity: O(log n) --> The time complexity is O(log n) because the function recursively divides the number by 2 until it reaches 0, which takes log base 2 of n steps.
// Space Complexity: O(log n) --> The space complexity is O(log n) due to the recursive call stack, which can go as deep as log base 2 of n in the worst case.
// Note: The function prints the binary representation of the integer n in reverse order, so the output will be the binary digits from most significant to least significant.