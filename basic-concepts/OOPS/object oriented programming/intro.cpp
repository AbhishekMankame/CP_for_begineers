// OOPS: Object Oriented Programming
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
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
    Teacher t1;
    t1.name = "Andrew Ng";
    t1.subject = "Machine Learning";
    t1.dept = "CS";
    t1.salary = 25000;

    cout << t1.name << endl;
    return 0;
}