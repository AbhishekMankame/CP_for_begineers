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

*/

