/*
Bitwise operators are used to perform operations on bits and are fundamental in low-level programming.
They allow manipulation of individual bits within an integer, which can lead to efficient algorithms and optimizations.
Common bitwise operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>). 

*/

#include<iostream>
using namespace std;

int main() {
    cin.tie(0); // Untie cin from cout
    cout.tie(0); // Untie cout from cin
    ios_base::sync_with_stdio(false); // Fast input/output

    int a = 5, b = 3;
    cout << "a & b: " << (a & b) << endl; // Bitwise AND
    cout << "a | b: " << (a | b) << endl; // Bitwise OR
}