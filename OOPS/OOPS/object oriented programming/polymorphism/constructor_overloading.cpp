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

int main()
{
    Student s1; // Automatically non parameterized constructor call ho jaayega

    Student s2("Andrew Ng"); // Parameterized constructor call ho jaayega
    return 0;
}

// Constructor overloading is an example of compile time polymorphism