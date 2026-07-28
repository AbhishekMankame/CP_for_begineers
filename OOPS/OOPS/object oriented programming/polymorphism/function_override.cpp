#include <iostream>
#include <string>
using namespace std;

class Parent
{

public:
    void show()
    {
        cout << "Parent class\n";
    }

    virtual void hello()
    {
        cout << "Hello from Parent\n";
    }
};

class Child : public Parent
{

public:
    void show()
    {
        cout << "Child class\n";
    }

    void hello()
    {
        cout << "Hello from Child\n";
    }
};

int main()
{
    Child c1;
    c1.show();
    c1.hello();
    return 0;
}