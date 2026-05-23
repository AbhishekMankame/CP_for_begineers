/*
## Strings in C++
Strings in C++ are objects of the std::string class. They are used to represent and manipulate sequences of characters.

- Unlike C-style character arrays (char[]), std::string handles memory management automatically and provides a wide range of built-in functions for ease of use.
- Can automatically grow and shrink as you add or remove characters, unlike fixed-size C-style strings.
- You can easily access characters, join strings, compare them, extract substrings, and search within strings using built-in functions.

*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    // Creating a string
    string str = "Hello Geeks";

    // Traversing using index
    cout << "Using index: ";
    for(int i=0;i<str.size();i++){
        cout << str[i];
    }
    cout << endl;

    // Traversing using range-based for loop
    cout << "Using range-based for loop: ";
    for(char ch:str){
        cout << ch;
    }
    cout << endl;

    // Traversing using iterator
    cout << "Using iterator: ";
    for(auto it = str.begin();it!=str.end();it++){
        cout << *it;
    }
    cout << endl;

    return 0;
}

/*
Using index: Hello Geeks
Using range-based for loop: Hello Geeks
Using iterator: Hello Geeks
*/


/*
### String Length
- The number of characters in a string can be found using size() or length().
- Time Complexity to find string length is O(1).

*/

int main2(){
    string str = "Hello Geeks";

    // Using size()
    cout << "Length using size(): " << str.size() << endl;
    
    // Using length()
    cout << "Length using length(): " << str.length() << endl;

    return 0;
}


/*
### Concatenation of Strings
- Strings can be joined using the + operator or the append() function.
- The + operator creates a new string, while append() modifies the existing string in place.
- Time Complexity for the concatenation is O(m+n), where n is the size of string and m is the size of the string to be concatenated.
*/

int concatenate(){
    string str1 = "Hello";
    string str2 = " Geeks";

    // Using + operator
    string result1 = str1 + str2;
    cout << "Concatenation using + : " << result1 << endl;

    // Using append() function
    string result2 = str1;
    result2.append(str2);
    cout << "Concatenation using append(): " << result2 << endl;

    return 0;
}

/*
Concatenation using + : Hello Geeks
Concatenation using append(): Hello Geeks
*/