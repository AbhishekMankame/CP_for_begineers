// Inheritance - When properties & member functions of base class are passed on tho the derived class.

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    Person()
    {
        cout << "Parent constructor.. \n";
    }
};

class Student : public Person
{
public:
    // name, age, rollno
    int rollno;

    Student()
    {
        cout << "Child constructor..\n";
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "rahul";
    s1.age = 21;
    s1.rollno = 1234;
    s1.getInfo();
}