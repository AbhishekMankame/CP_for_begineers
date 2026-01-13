/*
C++ STL is divided into 4 parts
Algorithms
Containers
Functions
Iterators
*/

/*
Pairs: In C++, a pair standard library container that stores two values together as a single unit.
The two values can be of same or different datatypes.
It is defined in the <utility> header and provided by the STL (Standard Template Library)

Syntax: pair<dataType1, dataType2> pairName;
*/ 

// Declaring and Initializing a Pair
#include<iostream>
#include<utility>
using namespace std;

// Pairs
void explainPair() {
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    // Nested pairs
    pair<int,pair<int,int>> p2 = {1,{3,4}};
    cout << p.first << " " << p.second.second << " " << p.second.first; // Output: 1 4 3
    
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};

    cout << arr[1].second;

}

int main() {
    pair<int,string> p1(1,"Apple");
    cout << p1.first << endl; // Output: 1
    cout << p1.second << endl; // Output: Apple

    // Different ways to declare pair
    pair<int,int> a(1,2); // Normal initialization method
    pair<int,int> b = make_pair(1,2); // Make_pair() method: It is a helper function that creates a pair object automatically
    pair<int,int> c = {1,2}; // Brace initialization (introduced in C++ 11), it is preferred because it is clean and safe


    return 0;
}