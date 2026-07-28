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

    // Thread ID
    cout << this_thread::get_id() << endl; // Current thread ID
    cout << t1.get_id() << endl;           // ID of thread t1

    return 0;
}