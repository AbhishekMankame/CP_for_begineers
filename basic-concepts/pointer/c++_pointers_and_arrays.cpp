/*

## C++ Pointers and Arrays
In C++, Pointers are variables that hold addresses of other variables. Not only can a pointer store the address of a single variable,
it can also store the address of cells of an array.

Consider this example,

int *ptr;
int arr[5];

Store the address of the first element of arr in ptr

ptr = arr;

Here, 'ptr' is a pointer variable while 'arr' is an 'int' array. The code 'ptr = arr;' stores the address of the first elememt of the array in variable 'ptr'.

Notice that we have used 'arr' instead of '&arr[0]'. This is because both are the same. So, the code below is the same as the code above.

int *ptr;
int arr[5];
ptr = &arr[0];

The addresses for the rest of the array elements are given by '&arr[1]','&arr[2]','&arr[3]' and '&arr[4]'.

*/ 

/*
### Point to every array element

Suppose we need to point to the fourth element of the array using the same pointer 'ptr'.

Here, if 'ptr' points to the first element in the above example then 'ptr+3' will point to the fourth element. For example,

int *ptr;
int arr[5];
ptr = arr;

ptr + 1 is equivalent to &arr[1];
ptr + 2 is equivalent to &arr[2];
ptr + 3 is equivalent to &arr[3];
ptr + 4 is equivalent to &arr[4];

Similarly, we can access the elements using the single pointer. For example,

// use dereference operator
*ptr == arr[0];
*(ptr + 1) is equivalent to arr[1];
*(ptr + 2) is equivalent to arr[2];
*(ptr + 3) is equivalent to arr[3];
*(ptr + 4) is equivalent to arr[4];

Suppose if we have initialized 'ptr = &arr[2];' then

ptr - 2 is equivalent to &arr[0];
ptr - 1 is equivalent to &arr[1]; 
ptr + 1 is equivalent to &arr[3];
ptr + 2 is equivalent to &arr[4];

Note: The address between 'ptr' and 'ptr + 1' differs by 4 bytes. It is because 'ptr' is a pointer to an 'int' data. And, the size of int is 4 bytes in a 64-bit operating system.

Similarly, if pointer 'ptr' is pointing to 'char' type data, then the address between 'ptr' and 'ptr+1' is 1 byte. It is because the size of a character is 1 byte.

*/

#include<iostream>
using namespace std;

int main() {
    float arr[3];

    // declare pointer variable
    float *ptr;

    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for(int i=0;i<3;i++){
        cout << "&arr["<<i<<"] = " << &arr[i]<<endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout << "\nDisplaying address using pointers: " << endl;

    // use for loop to print addresses of all array elements using pointer notation
    for(int i=0;i<3;i++){
        cout << "ptr + "<< i << " = " << ptr+i << endl;
    }

    return 0;
}

/*
In the above program, we first simply printed the addresses of the array elements without using the pointer variable 'ptr'.

Then, we used the pointer 'ptr' to point to the address of 'a[0]', 'ptr+1' to point to the address of 'a[1]', and so on.

*/