#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
};

class Teacher
{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher
{
public:
    string research;
};

int main()
{
    TA t;
    t.name = "Andrew Ng";
    t.research = "Machine Learning";
    t.rollNo = 121;
    t.salary = 30000;
    t.subject = "AI";

    cout << t.name << endl
         << t.research << endl
         << t.rollNo << endl
         << t.salary << endl
         << t.subject << endl;
    return 0;
}