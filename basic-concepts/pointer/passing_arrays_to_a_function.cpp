/* Passing Array to a Function in C++ Programming
In C++, we can pass arrays as an argument to a function. And, also we can return arrays from a function.

### Syntax
The syntax for passing an array to a function is:
<pre>
returnType functionName(dataType arrayName[]){
    // code
}
#### Example 1: Passing One-dimensional Array to a Function

*/


// C++ Program to display marks of 5 students
#include<iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// declare function to display marks
// take a 1d array as parameter

void display(int m[]){
    cout<<"Displaying marks: "<<endl;

    // display array elements
    for(int i=0;i<ARRAY_SIZE;++i){
        cout<<"Student "<<i+1<<": "<<m[i]<<endl;
    }
}

int main(){
    // declare and initialize an array
    int marks[ARRAY_SIZE] = {88, 76, 90, 61, 69};

    // call display function
    // pass array as argument
    display(marks);

    return 0;
}