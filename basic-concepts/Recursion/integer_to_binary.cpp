/*Integer to binary code update*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void intToBin(int n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    }
    string binary = "";
    while (n > 0)
    {
        binary += to_string(n % 2); // stor remainder as char
        n = n / 2;
    }

    for (int i = binary.size() - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
}

int main()
{
    int n;
    cin >> n;
    intToBin(n);

    return 0;
}

// Time Complexity: O(log n) - The function iterates through the number of bits in the binary representation of n, which is log base 2 of n.

// Space Complexity: O(log n) - The space complexity is O(log n) due to the string used to store the binary representation, which can be at most log base 2 of n characters long.

// Note: This function prints the binary representation of the integer n in the correct order, from most significant bit to least significant bit.