#include <iostream>
#include <thread>
using namespace std;

void printNumbers()
{
    for (int i = 1; i <= 5; ++i)
    {
        cout << "Thread prints: " << i << endl;
    }
}

int main()
{
    // Create a thread to run the function
    thread t1(printNumbers);

    // Check if the thread can be joined
    if (t1.joinable())
    {
        t1.join(); // Main thread waits for t1 to finish
    }
    // t1.join();
    cout << "Main thread finished." << endl;
    return 0;
}