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


/*
## String
C++ provides a powerful alternative for the char*. It is not a built-in data type, but is a container class in the STL. 
String class provides different string manipulation functions like concatenation, find, replace etc.

*/

string s0;  // s0 = ""
string s1("Hello"); // s1 = "Hello"
string s2(s1);  // s2 = "Hello"
string s3 (s1, 1, 2); // s3 = "el"
string s4 ("Hello World");  // s4 = "Hello"
string s5 (5, '*'); // s5 = "*****"
string s6 (s1.begin(), s1.begin()+3);   // s6 = "Hel"

/*
Here are some member functions:
append(): Inserts additional characters at the end of the string (can also be done using '+' or '+=' operator). Its time complexity is O(N) where N is the sizae of the new string.
assign(): Assigns new string by replacing the previous value (can also be done using '=' operator).
at(): Returns the character at a particular position (can also be done using '[]' operator). Its time complexity is O(1).
begin(): Returns an iterator pointing to the first character. Its time complexity is O(1).
clear(): Erases all the contents of the string and assign an empty string ("""") of length zero. Its time complexity is O(1).
compare(): Compares the value of the string with the string passed in the parameter and returns the integer accordingly.
    Its time complexity is O(N+M) where N is the size of the first string and M is the size of the second string.
copy(): Copies the substring of the string in the string passed as parameter and returns the number of characters copied. Its time complexity is O(N) where N is the size of the copied string.
c_str(): Convert the string into C-style string (null terminated string) and returns the pointer to the C-style string. Its time complexity is O(1).
empty(): Returns a boolean value, true if the string is empty and false if the string is not empty. Its time complexity is O(1).
end(): Returns an iterator pointing to the position which is next to the last character. Its time complexity is O(1).
erase(): Deletes a substring of the string. Its time complexity is O(N) where N is the size of the new string.
find(): Searches the string and returns the first occurrence of the parameter in the string. Its time complexity is O(N) where N is the size of the string.
length(): Returns the length of the string. Its time complexity is O(1).
replace(): Replaces the particular portion of the string. Its time complexity is O(N) where N is the size of the new string.
resize(): Resize the string to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of the new string.
size(): Returns the length of the string. Its complexity is O(1).
substr(): Returns a string which is the copy of the substring. Its time complexity is O(N) where N is the size of the substring.
*/