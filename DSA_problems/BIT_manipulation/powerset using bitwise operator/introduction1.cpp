/*
This is a simple C++ program to generate the power set of a given set using bitwise operators.
The power set is the set of all subsets of a given set, including the empty set and the set itself.
*/

#include<iostream>
using namespace std;

void powerSet(string s) {
    int n = s.length();
    int psize = (1 << n); // 2^n subsets - This calculates the size of the power set using bitwise left shift operator. Here, 1 << n is equivalent to 2^n.
    for(int i = 0; i < psize; i++) {
        for(int j = 0; j < n; j++) {
            // Check if jth bit in i is set
            if((1 & (1 << j))!=0) {
                cout << s[j]; // If the jth bit is set, include the jth character of the string in the current subset
            }
        }
        cout << endl; // Print the current subset
    }
}