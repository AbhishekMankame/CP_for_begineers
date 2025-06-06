/* Counting zeros in factorial - Efficient Method*/
// This method counts the number of trailing zeros in n! by counting the number of times 5 is a factor in the numeration.
// General formula:
// Trailing Zeros in n! = floor(n/5) + floor(n/25) + floor(n/125) + ...

#include<iostream>
using namespace std;

int countZeros(int n) {
    int count = 0;
}