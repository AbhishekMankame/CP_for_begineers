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

    // Student(Student &obj)
    // {
    //     this->name = obj.name;
    //     cgpaPtr = new double;
    //     *cgpaPtr = *obj.cgpaPtr;
    // }

    // Destructor
    ~Student()
    {
        cout << "Hi, I delete everything\n";
        delete cgpaPtr;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Rahul Kumar", 8.9);
    // Student s2(s1);
    // s1.getInfo();
    // *(s2.cgpaPtr) = 9.2;
    // s2.name = "Neha";
    // s2.getInfo();

    s1.getInfo();
    return 0;
}