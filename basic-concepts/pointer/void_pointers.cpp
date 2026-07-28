/*
## C++ Pointer to Void

In C++, we cannot assign the address of a variable of one data type to a pointer of another data type. 
Consider this example:

// pointer is of int type
int *ptr;

// variable is of double type
double d = 9.0

// Error
// can't assign double* to int*
ptr = &d;

Here, the error occurred because the address is a 'double' type variable.
However, the pointer is of 'int' type.

In such situations, we can use the pointer to void (void pointers) in C++. For example,

// void pointer
void *ptr;

double d = 9.0;

// valid code
ptr = &d;

Here, the error occurred because the address is a 'double' type variable. However, the pointer is of 'int' type.

In such situations, we can use the pointer to void (void pointers) in C++. For example,

// void pointer
void *ptr;

double d = 9.0;

// valid code
ptr = &d;

The void pointer is a generic pointer that is used when we don't know the data type of the variable that the pointer points to.

*/
