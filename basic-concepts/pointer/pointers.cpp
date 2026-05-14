/*
Address in C++
Every variable we declare in our program has an associated location in the memory, which we call the memory address of the variable.

If we have a variable 'var' in our program, '&var' returns its memory address.


*/ 


#include<bits/stdc++.h>
using namespace std;

int main(){
    // declare variables

    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: " << &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
}

/*

Address of var1: 0x7fff5fbff8ac
Address of var2: 0x7fff5fbff8a8
Address of var3: 0x7fff5fbff8a4

Here, '0x' at the beginning represents the address in the hexadecimal form.
Notice that first address differs from the second by 4 bytes, and the second address differs from the third by 4 bytes.
The difference is because the sizae of an 'int' is 4 bytes in a 64-bit system

Note: You may not get the same results when you run the program. This is because the address depends on the environment in which the program runs.

*/

/*
### C++ Pointers

Here is how we declare pointers:
int *point_var;

Here, we have declared a variable 'point_var' which is a pointer to an 'int'.

We can also declare pointers in the following way:
int* point_var; // preferred syntax

### Assigning Addresses to Pointers

Here is how we can assign addresses to pointers:

int var = 5;
int* point_var = &var;

Here, '5' is assigned to the variable 'var'. And the address of 'var' is assigned to the 'point_var' pointer with the code 'point_var = &var'.

Note: It is a good practice to initialize pointers as soon as they are declared.


## Get the value for the Address Using Pointers
To get the value pointed by a pointer, we use the '*' operator.
For example,

int var = 5;

// assign address of var to point_var
int* point_var = &var;

// access value pointed by point_var
cout << *point_var << endl; // Output: 5


In the above code, the address of var is assigned to 'point_var'. We have used the '*point_var' to get the value stored in that address.

When '*' is used with pointers, it's called the dereference operator. It operates on a pointer and gives the value pointed by the address stored in the pointer.
That is, '*point_var = var'.

Note: In C++, 'point_var' and '*point_var' are completely different. We cannot do something like '*point_var = &var;'. Here, 'point_var' is a pointer that stores the address of variable it points to while '*point_var' returns the value stored at the address pointed by 'point_var'.
*/

