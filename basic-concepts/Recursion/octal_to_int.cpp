#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octal)
{
    int decimal = 0, base = 1;

    while (octal > 0)
    {
        int lastDigit = octal % 10;
        decimal += lastDigit * base;
        base = base * 8;
        octal = octal / 10;
    }

    return decimal;
}

int main()
{
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;
    cout << "Decimal equivalent: " << octalToDecimal(octal) << endl;
    return 0;
}

// Time Complexity: O(log n) - The function processes each digit of the octal number, which has a logarithmic relationship with the size of the number in base 10.
// Space Complexity: O(1) - The space complexity is constant as we are using a fixed amount of space for variables regardless of the input size.
// Note: The function converts an octal number to its decimal equivalent by processing each digit from least significant to most significant.