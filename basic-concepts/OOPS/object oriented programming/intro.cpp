// OOPS: Object Oriented Programming
#include <iostream>
#include <string>
using namespace std;

class Techer
{
    // Properties
    string name;
    string dept;
    string subject;
    float salary;

    // Methods --> Methods ko hi hum C++ mei member functions kehte hai
    void changeDept(string newDept)
    {
        dept = newDept;
    }
}; // Here semicolon is necessary, it will denote the end of the class

int main()
{

    return 0;
}