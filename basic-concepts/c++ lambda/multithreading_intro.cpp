#include <iostream>
#include <thread>
using namespace std;

void task1()
{
    cout << "Task 1 is running\n";
}

void task2()
{
    cout << "Task2 is running\n";
}

int main()
{
    thread t1(task1); // Run task1 in a new thread
    thread t2(task2); // Run task2 in another thread

    t1.join(); // Wait for t1 to finish
    t2.join(); // Wait for t2 to finish

    cout << "Main thread done\n";
    return 0;
}