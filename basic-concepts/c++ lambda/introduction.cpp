#include <iostream>
using namespace std;

int main()
{
    auto greet = []()
    { cout << "Hello using lambda"; };
    greet();
}