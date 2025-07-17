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