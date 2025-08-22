#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    Teacher(string name, string dept, string subject, double salary)
    {
        // yaha par left waala object ki name property ke baare mei baat kar rahe hai, and right waala name constructor ka parameter hai

        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "department: " << dept << endl;
        cout << "subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Teacher t1("Shradha", "Computer Science", "C++", 25000);
    t1.getInfo();

    return 0;
}