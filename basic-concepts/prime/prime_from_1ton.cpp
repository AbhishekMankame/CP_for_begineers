#include <iostream>
using namespace std;

void isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                flag = false;
            }
            if (flag == false)
            {
                cout << j << " ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    isPrime(n);
    return 0;
}