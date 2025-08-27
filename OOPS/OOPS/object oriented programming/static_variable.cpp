#include <iostream>
#include <string>
using namespace std;

void fun()
{
    static int x = 0; // Initialize statement 1 hi baar run karegi
    cout << "x: " << x << endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}