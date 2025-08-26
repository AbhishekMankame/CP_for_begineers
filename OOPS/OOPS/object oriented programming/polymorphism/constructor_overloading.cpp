#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    Student()
    {
        cout << "Non-parameterized Constructor\n";
    }

    Student(string name)
    {
        this->name = name;
        cout << "Parameterized Constructor\n";
    }
};