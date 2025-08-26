#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollNo;
};

class GradStudent : public Student
{
public:
    string researchArea;
};

int main()
{
    GradStudent s1;
    s1.name = "Tony Stark";
    s1.researchArea = "CSE";
    cout << s1.name << endl
         << s1.researchArea << endl;
    return 0;
}