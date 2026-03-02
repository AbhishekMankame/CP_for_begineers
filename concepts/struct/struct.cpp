/* 
What is a struct in C++?
In C++, a struct (short for structure) is a user-defined data type that groups related variables (and even functions) together under one name.
It is used to represent a record - for example, a student, an employee, a car, etc
*/

#include<bits/stdc++.h>
using namespace std;

struct StructureName {
    dataType member1;
    dataType member2;
    dataType member3;
};

// Example:

struct Student {
    int rollNo;
    string name;
    float marks;
}

// Now 'Student' is a new data type.