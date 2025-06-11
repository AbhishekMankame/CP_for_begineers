/*Mutex in C++*/
// Mutex (short for mutual exclusion) is a synchronization primitive that is used to protect shared data from being simultaneously accessed by multiple threads.
// In C++, the `std::mutex` class is used to create a mutex object. When a thread locks a mutex, other threads that try to lock the same mutex will block until the mutex is unlocked.
// This ensures that only one thread can access the shared resource at a time, preventing data races and inconsistencies.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex carMutex; // Mutex to protect shared resource

void driveCar(string driverName) {
    unique_lock<mutex> carLock(carMutex); // lock the mutex to ensure exclusive access to the car
    cout << driverName << " is driving the car." << endl;
    // Simulate driving time
    this_thread::sleep_for(chrono::seconds(2));
    cout << driverName << " is done driving" << endl;
    carLock.unlock(); // Unlock the mutex when done
}

int main() {
    thread t1(driveCar, "Abhishek");
    thread t2(driveCar, "Elon");
    t1.join(); // Wait for t1 to finish before proceeding
    t2.join(); // Wait for t2 to finish before proceeding

}

// The `unique_lock` is used here to automatically manage the mutex lock, ensuring that it is released when the lock goes out of scope.
// This prevents deadlocks and makes the code cleaner.
// The `this_thread::sleep_for` function is used to simulate the time taken to drive the car.
// The `join` method is called on each thread to ensure that the main thread waits for both threads to finish before exiting.

// Time Complexity: O(1) for locking and unlocking the mutex, but the overall complexity depends on the operations performed within the locked section.
// Space Complexity: O(1) for the mutex itself, but additional space may be used depending on the operations performed within the locked section.
// Note: Always ensure that the mutex is unlocked properly to avoid deadlocks. Using `unique_lock` is a good practice as it automatically handles the locking and unlocking of the mutex.

// Here instead of using `lock_guard`, we use `unique_lock` which provides more flexibility, such as the ability to unlock and lock the mutex multiple times within the same scope.
// The `unique_lock` can be used to lock and unlock the mutex multiple times, which is useful in scenarios where you need to perform multiple operations on the shared resource.