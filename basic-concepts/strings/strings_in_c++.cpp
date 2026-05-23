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
Output:
Using index: Hello Geeks
Using range-based for loop: Hello Geeks
Using iterator: Hello Geeks
*/


/*
### String Length
- The number of characters in a string can be found using size() or length().
- Time Complexity to find string length is O(1).

*/

int size(){
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
Output:
Concatenation using + : Hello Geeks
Concatenation using append(): Hello Geeks
*/


/*
### Modifying a String
- Characters of a string can be added with .push_back(), removed with .pop_back(), or altered using .insert() and .erase().
- Time Complexity for push/pop is O(1) and O(n) for insert/erase.
*/

int modify() {
    string str = "Hello Geeks";

    // Adding a character at the end
    str.push_back('!');
    cout << "After push_back: " << str << endl;

    // Removing the last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;

    // Inserting a substring
    str.insert(5,"C++");
    cout << "After insert: " << str << endl;

    // Erasing part of the string
    str.erase(5, 4);
    cout << "After erase: " << str << endl;

    return 0;
}

/*
Output:
After push_back: Hello Geeks!
After pop_back: Hello Geeks
After insert: Hello C++ Geeks
After erase: Hello Geeks
*/


int substring_extraction() {
    string str = "Hello Geeks";

    // Extract "Hello"
    string sub1 = str.substr(0, 5);
    cout << "Substring 1: " << sub1 << endl;

    // Extract "Geeks"
    string sub2 = str.substr(6,5);
    cout << "Substring 2: " << sub2 << endl;

    return 0;
}

/*
Output:
Substring 1: Hello
Substring 2: Geeks
*/

/*
### Searching in a String
- The find() function is used to search for a substring inside a string. If found(), it returns the index(position) where the substring starts; if not, it returns a special value (npos).
- Time Complexity to search is O(m*n), where n is the length of the string and m is the substring length.
*/

int search() {
    string str = "Hello Geeks";
    size_t pos = str.find("Geeks");

    if(pos < str.size()) {
        cout << "\"Geeks\" found at index: "; << pos << endl;
    }

    return 0;
}

// Output: "Geeks" found at index: 6

/*
### C++ string functions

C++ provides some inbuilt functions which are used for string manipulation, such as the strcpy() and strcat() functions for copying and concatenating strings. Some of them are:

length() --> This function returns the length of the string.
swap() --> This function is used to swap the values of 2 strings.
size() --> Used to find the size of string
resize() --> This function is used to resize the length of the string up to the given number of characters.
push_back() --> This function is used to push the passed character at the end of the string
pop_back() --> This function is used to pop the last character from the string
clear() --> This function is used to remove all the elements of the string
find() --> This function is used to search for a certain substring inside a string and returns the position of the first character of the substring.
*/