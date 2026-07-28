// Stack Introduction
// A stack is a Last-In-First-Out (LIFO) data structure - the last element added is the first one to be removed.
// Think of it like a stack of plates 🍽️ - you add to the top, and remove from the top.

// Common Operations:
/*push(x) --> Add x tp the top --> O(1)
pop() --> Remove the top element --> O(1)
top() / peek() --> View the top element without removing --> O(1)
empty() --> Check if stack is empty --> O(1)
size() --> Get the number of elements --> O(1)
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Is empty: " << s.empty() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // cout << "Top element: " << s.top() << endl;
    cout << "Is empty: " << s.empty() << endl;
    return 0;
}