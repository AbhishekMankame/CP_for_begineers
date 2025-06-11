#include<iostream>
#include<thread> // For multithreading
using namespace std;

void function1() {
    for(int i = 0; i < 200; i++) {
        cout << "+";
    }
}

void function2() {
    for(int i = 0; i < 200; i++) {
        cout << "-";
    }
}

int main() {
    function1(); // Call function1 first
    function2();
}