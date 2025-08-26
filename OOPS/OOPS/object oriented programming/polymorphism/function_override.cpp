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
};

class Child : public Parent
{

public:
    void show()
    {
        cout << "Child class\n";
    }
};

int main()
{
    Child c1;
    c1.show();
    return 0;
}