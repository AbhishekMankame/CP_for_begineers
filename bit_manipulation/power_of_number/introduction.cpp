/*Power of number*/
#include <iostream>
using namespace std;

int powr(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a;
            a = a * a;
            b >> 1; // or we can write it as b=b/2
        }
    }

    return res;
}