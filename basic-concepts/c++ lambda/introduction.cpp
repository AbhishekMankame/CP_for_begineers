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
}