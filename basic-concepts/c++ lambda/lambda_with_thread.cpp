#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>
using namespace std;

int main()
{
    int count = 0;
    mutex mtx;
    auto increment = [&count, &mtx]()
    {
        lock_guard<mutex> lock(mtx);
        count++;
    };
    thread t1(increment);
    thread t2(increment);
    t1.join();
    t2.join();
    cout << count << endl;

    return 0;
}