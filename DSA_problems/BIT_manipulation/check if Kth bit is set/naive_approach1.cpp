/*Checking if Kth bit is set or not*/

#include<iostream>
using namespace std;

void isSet(int n, int k) {
    int x = 1; // Initialize x to 1, which is 2^0
    for(int i = 0; i < (k-1); i++) {
        x = x * 2; // Calculate 2^(k-1)
    }
    if((n & x) != 0) {
        cout << "Yes" << endl; // If the Kth bit is set, print "Yes"
    }
    else {
        cout << "No" << endl; // If the Kth bit is not set, print "No"
    }
}