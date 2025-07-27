// Number of digits in the given number n
#include <iostream>
#include <bits/stdc++.h> // log10 is in the library <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digits = log10(n) + 1;
    cout << digits << endl;
    return 0;
}