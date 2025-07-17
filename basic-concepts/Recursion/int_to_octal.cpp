// Int to Octal Conversion using Recursion

#include <iostream>
using namespace std;

void intToOctal(int n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    }

    int octal[100]; // to store octal bits
    int i = 0;
    while (n > 0)
    {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << octal[j];
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Octal representation: ";
    intToOctal(n);

    return 0;
}

// Time Complexity: O(log n) --> The time complexity is O(log n) because the function recursively divides the number by 8 until it reaches 0, which takes log base 8 of n steps.
// Space Complexity: O(log n) --> The space complexity is O(log n) due to the array used to store the octal digits, which can be at most log base 8 of n elements long.
// Note: This function prints the octal representation of the integer n in the correct order, from most significant digit to least significant digit.