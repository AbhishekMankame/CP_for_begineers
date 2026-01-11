#include<bits/stdc++.h> // All the libraries are present inside stdc++.h, so all the libraries are automatically included
// so we need not to include each library individually
using namespace std; // If we do not write this line, then everytime we need to use std:: for cin and cout

void print(){ // void function does not returns anything
    cout<<"raj";
}


// Return type function
int sum(int a, int b){ // This function return the integer type
    return a+b;
}

// Note: we can use any datatypes as return type

int main(){

    int a;
    cin>>a;
    cout<<a;
    print(); // This print function calls the above print function and prints "raj" in the screen
    int s = sum(3,5); // This will return the sum of 3 and 5
    cout << s; // Returns 8
    return 0;
}