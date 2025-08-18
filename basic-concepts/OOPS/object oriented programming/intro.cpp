// OOPS: Object Oriented Programming
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary; // Here we have made salary as private and other things as public

public:
    // Properties
    string name;
    string dept;
    string subject;

    // Methods --> Methods ko hi hum C++ mei member functions kehte hai
    void changeDept(string newDept)
    {
        dept = newDept;
    }
}; // Here semicolon is necessary, it will denote the end of the class

class Student
{
public:
    string name;
    int rollNo;
    int age;
};

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