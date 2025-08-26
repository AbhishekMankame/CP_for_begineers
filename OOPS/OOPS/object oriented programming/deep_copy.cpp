#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Shallow copy
    // Student(Student &obj)
    // {
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }

    // Deep Copy
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);
    s1.getInfo();
    s2.name = "Neha";
    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();
    s1.getInfo();
    return 0;
}