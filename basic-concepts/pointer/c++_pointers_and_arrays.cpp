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