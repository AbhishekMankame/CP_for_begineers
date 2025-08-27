#include <iostream>
#include <string>
using namespace std;

// Static variable in function
void fun()
{
    static int x = 0; // Initialize statement 1 hi baar run karegi
    cout << "x: " << x << endl;
    x++;
}

// Static variable in class
class A
{
public:
    int x;
    void incX()
    {
        x = x + 1;
    }
};

int main()
{
    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout << obj1.x << endl;
    // obj.incX();
    cout << obj2.x << endl;
    return 0;
}