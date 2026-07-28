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
// Note: Pair generally lies in the utility library
void explainPair() {
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    // Nested pairs
    pair<int,pair<int,int>> p2 = {1,{3,4}};
    cout << p.first << " " << p.second.second << " " << p.second.first; // Output: 1 4 3
    
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};

    cout << arr[1].second;

}

// Vectors
void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);  // emplace_back() is similar to push_back(): It dynamically increases the size and all the element
    // emplace_back() is faster than push_back() generally

    vector<pair<int,int>> vec; // vector of a pair datatype
    vec.push_back({1,2});
    vec.emplace_back(1,2); // Here emplace_back() automatically assumes that ki it is the pair and takes it as an input and inserts into the vector that we have defined

    vector<int> v3(5,100);  // Her vector containing 5 instances of 100 --> {100, 100, 100, 100, 100} is already defined

    vector<int> v4(5); // Container of size 5 with 5 instance of 0 or any garbage value is declared (it is depend on the compiler)

    vector<int> vec1(5,20);
    vector<int> vec2(vec1);

    // Accessing element of vector
    cout << v[0] << " " <<v.at(0);

    vector<int>::iterator it = v.begin();
    // Iterator points to the memory address, means it will point to the memory, and not to the element
    // To access it we will write (*) --> *(v.begin())
    // Iterator points to the memory where the element lies

    it++;
    cout<<*(it)<<" "; // Here it will print 10 as iterator 'it' is shifted to 10 


    // Different types of iterators
    vector<int>::iterator it=v.end(); // end will point to the one position after the last element (memory location after last element)
    vector<int>::iterator it=v.rend(); // Here it will point to the one position before the first element
    vector<int>::iterator it=v.rbegin(); // Here it will point to the last element (it is a reverse iterator --> where iterator moves in the reverse way)

    cout << v.back() << " "; // Points to the last element of the vector

    // Printing of vector
    for(vector<int>::iterator it=v.begin();it!=v.end();it++) {
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    // for each loop
    for(auto it:v){
        cout<<it<<" ";
    }


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