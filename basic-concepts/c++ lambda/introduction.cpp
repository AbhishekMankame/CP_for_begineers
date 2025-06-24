#include <iostream>
#include <vector>
#include <algorithm>
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

    // Using lambda with STL
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::for_each(nums.begin(), nums.end(), [](int n)
                  {
    if (n % 2 == 0) std::cout << n << " "; });
}