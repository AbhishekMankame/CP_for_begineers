#include <iostream>
#include <thread>
using namespace std;

void printMessage()
{
    cout << "Hello from thread \n";
}

int main()
{
    thread t1(printMessage); // Create a new thread that runs printMessage()
    t1.join();               // Wait for thread to finish
    return 0;
}