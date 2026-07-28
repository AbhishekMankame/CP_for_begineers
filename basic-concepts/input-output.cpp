#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You entered: " << a << endl;
    return 0;
}

// Scope:
/* What is scope?
Scope refers to the visibility and lifetime of variables and functions in a program. It determines where a variable can be accessed and modified.
In C++, scope is defined by the block in which a variable is declared. Variables declared inside a block (e.g., within a function) are not accessible outside of that block. This is known as local scope.
Conversely, variables declared outside of any function (global variables) can be accessed from anywhere in the program, giving them global scope. 
Understanding scope is crucial for managing variable lifetimes and avoiding naming conflicts in larger programs. 
*/

// Example of scope in C++
void OuterFunction() { //Outer Scope
    int outerVar = 10; // Variable in outer scope

    {
        int innerVar = 20; // Variable in inner scope
        cout << "Outer variable inside inner scope: " << outerVar << endl;
        cout << "Inner variable inside inner scope: " << innerVar << endl;
    }

    // Trying to access innerVar outside its scope will result in an error
    // cout << innerVar << endl; // Uncommenting this line will cause a compilation error
}