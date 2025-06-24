#include <iostream>
using namespace std;

int main()
{
    auto greet = []()
    { cout << "Hello using lambda" << endl; };
    greet();

    auto add = [](int a, int b)
    { return a + b; };
    cout << add(2, 3) << endl;

    // Generic Lambda
    auto add1 = [](auto a, auto b)
    { return a + b; };
    cout << add1(3.4, 1.5) << endl;

    // Mutable Lambda: Mutable lambda allows us to modify those caputerd-by-values variables inside the lambda's body (but only the copy, not the original variable outside).
    int x = 10;
    auto f = [x]() mutable
    {x++; cout << x << endl; };
    f();
    cout << x << endl;
}