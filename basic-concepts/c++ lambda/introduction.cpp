#include <iostream>
using namespace std;

int main()
{
    auto greet = []()
    { cout << "Hello using lambda" << endl; };
    greet();

    auto add = [](int a, int b)
    { return a + b; };
    cout << add(2, 3);
}