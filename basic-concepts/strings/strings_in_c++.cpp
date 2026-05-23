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