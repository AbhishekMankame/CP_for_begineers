#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    q.push(60);
    q.push(70);
    q.push(80);
    cout << q.front() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

// Time Complexity: for push and pop operations, it is O(1) because it is implemented using a deque (double-ended queue).
// Space Complexity: O(n) where n is the number of elements in the queue.
// Note: Queue is FIFO (First In First Out) data structure