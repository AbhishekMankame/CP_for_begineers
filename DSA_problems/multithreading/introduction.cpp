#include<iostream>
#include<thread> // For multithreading
using namespace std;

void function1(char symbol) {
    for(int i = 0; i < 20; i++) {
        cout << symbol;
    }
}

void function2() {
    for(int i = 0; i < 20; i++) {
        cout << "-";
    }
}

int main() {
    // function1(); // Call function1 first
    // function2();

    thread t1(function1,'o'); // Create a thread for function1
    thread t2(function2); // Create a thread for function2

    system("pause>nul"); // Pause the console to see the output

}