#include <iostream>
using namespace std;

int binaryToDecimal(string binary)
{
    int res = 0;
    for (char bit : binary)
    {
        res = res * 2 + (bit - '0');
    }

    return res;
}

int main()
{
    string binary;
    cin >> binary;

    cout << binaryToDecimal(binary);
    return 0;
}