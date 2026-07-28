## Classes and Structures in C++
Suppose you are tasked up to develop a list of books, their authors and genres. Creating seperate data variables everytime is a very hectic process. Instead, we can have new type of data structure for all these books, which will store all the different entries together and whenever we have a new book, we can just use it to fill in our values. This is the same concept that is incorporated by Classes and Structures. We will see what classes and structures in C++ mean and how they differ.

### Classes in C++
As an object-oriented programming language, C++ introduces the fundamental concept of classes, paving it way for features like encapsulation, polymorphism, abstraction and inheritance.<br>
<br>
<b> Understaning and Defining Class</b><br>
A class is a self-defined data type that contains data members and member functions. Data members are the data variables and member functions are the functions used to manipulate these variables. An object, in turn, is an instance of a class, with its behavior defined by the combination of data variables and member functions within the class.<br>
Let's understand it with the help of an illustrative example,<br>
Take the case of a class of phones, there are various types of smartphones from different brands, but all of them share some common properties like making a phone call, messaging, etc. Here, smartphones can be the class, data members can be battery life, screen size, etc., and member functions can be making calls, messaging someone, etc. <br>
Incorporating this template in our example, the class looks like this:<br>
Expanding the template to another example,

<pre>
class Solution {
    public: // access modifier
    int name;   // data members
    int id; // data members
    void print_function () {
        cout<< name << " " << id << endl;
    }   // member function
};

int main() {
    Solution object;    // object
    object.name=1;  // accessing data member
    object.id=2; // accessing data member
    object.print_function(); // accessing member function
}

</pre>