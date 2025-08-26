// Inheritance - When properties & member functions of base class are passed on tho the derived class.

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    // Person()
    // {
    //     cout << "Parent constructor.. \n";
    // }
};

class Student : public Person
{
public:
    // name, age, rollno
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
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
    // Student s1;
    // s1.name = "rahul";
    // s1.age = 21;
    // s1.rollno = 1234;

    Student s1("Rahul Kumar", 21, 1234);
    s1.getInfo();
}

// Inheritance is a way to derive a new class from an existing class, allowing the new class to inherit properties and behaviors (methods) from the existing class.