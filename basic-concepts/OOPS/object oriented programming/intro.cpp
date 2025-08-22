// OOPS: Object Oriented Programming
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary; // Here we have made salary as private and other things as public

public:
    Teacher()
    {
        cout << "Hi, I am constructor\n";
    }
    // Properties
    string name;
    string dept;
    string subject;

    // Methods --> Methods ko hi hum C++ mei member functions kehte hai
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter function --> private values ko set karna
    void setSalary(double s)
    {
        salary = s;
    }

    // getter function --> private values ki value get karne keliye
    double getSalary()
    {
        return salary;
    }
    // salary ko hum directly access nahi kar paa rahe, par indirectly inn public functions ke through access kar paa rahe hai
}; // Here semicolon is necessary, it will denote the end of the class

// class Student
// {
// public:
//     string name;
//     int rollNo;
//     int age;
// };

int main()
{
    Teacher t1; // Yaha par internally constructor ko call laga rahi hai, compiler automatically constructor ko kar deta hai
    Teacher t2;
    t1.name = "Andrew Ng";
    t1.subject = "Machine Learning";
    t1.dept = "CS";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}