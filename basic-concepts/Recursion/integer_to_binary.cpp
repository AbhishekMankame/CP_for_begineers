/*Integer to binary code update*/

#include <iostream>
#include <string>
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