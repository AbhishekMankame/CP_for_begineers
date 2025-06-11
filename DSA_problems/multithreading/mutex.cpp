/*Mutex in C++*/
// Mutex (short for mutual exclusion) is a synchronization primitive that is used to protect shared data from being simultaneously accessed by multiple threads.
// In C++, the `std::mutex` class is used to create a mutex object. When a thread locks a mutex, other threads that try to lock the same mutex will block until the mutex is unlocked.
// This ensures that only one thread can access the shared resource at a time, preventing data races and inconsistencies.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

void driveCar(string driverName) {
    cout << driverName << " is driving the car." << endl;
    // Simulate driving time
    this_thread::sleep_for(chrono::seconds(2));
    cout << driverName << " is done driving" << endl;
}

int main() {
    thread t1(driveCar, "Abhishek");
    thread t2(driveCar, "Elon");
    t1.join(); // Wait for t1 to finish before proceeding
    t2.join(); // Wait for t2 to finish before proceeding

}