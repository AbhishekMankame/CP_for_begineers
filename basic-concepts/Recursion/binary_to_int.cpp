#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int res = 0, base = 1;
    while (n > 0)
    {
        int lastD = n % 10;
        res = res + (lastD * base);
        base = base * 2;
        n = n / 10;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n);

    return 0;
}