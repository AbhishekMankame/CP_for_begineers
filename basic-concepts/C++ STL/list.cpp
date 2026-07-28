#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << l.size() << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;

    l.pop_back();
    l.pop_front();

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}