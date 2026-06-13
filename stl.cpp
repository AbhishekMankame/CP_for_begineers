#include<bits/stdc++.h>
using namespace std;

/*
C++ Templates
Templates are a feature of the C++ programming language that allows functions and classes to operate with generic types.
This allows a function or class to work on many different types of data without being rewritten for each one.

## What are generic functions or classes?
Many times while programming, there is a need for creating functions which perform the same operations but work with different data types.
So C++ provides a feature to create a single generic function instead of many functions which can work with different data type by using the template parameter.

## What is the template parameter?
The way we use normal parameters to pass as a value to function, in the same manner template parameters can be used to pass type as arguement to function. Basically, it tells what type of data is being passed to the function.

The syntax for creating a generic function:
template <class type> return-type function-name (parameter-list)

Here, 'type' is just a placeholder used to store the data type when this function is used you can use any other name instead class is used to specify the generic type of template, alternatively typename can be used instead of it.

*/

// creating a generic function 'swap (parameter-list)' using template:
template <class X> void swap(X &a, X &b) {
    X tp;
    tp = a;
    a = b;
    b = tp;
    cout << "Swaapped elements values of a and b are " << a << " and " << b << " respectively " << endl;
}

int main() {
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    swap(a,b); // function swapping 'int' elements
    swap(c,d); // function swapping 'float' elements
    return 0;
}

// After creating the generic function, compiler will automatically generate correct code for the type of data used while executing the function.
// C++ STL also has some containers (pre-build data structures) like vectors, iterators, pairs etc. These are all generic class which can be used to represent collection of any data type.a

/*
## Iterator
An iterator is any object that, points to some element in a range of elements (such as an array or a container) and has the ability to iterate throughg those elements using a set of operators (with atleast the increment(++) and dereference(*) operators).

A pointer is a form of an iterator. A pointer can point to elements in an array, and can interate over them using the increment operator(++). There can be other types of iterators as well. For each container class, we can define iterator which can be used to iterate through all the elements of that container.

For Vector: vector<int>::iterator it;

For List: list<int>::iterator it;

*/