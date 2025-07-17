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