#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << l.size() << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;

    return 0;
}