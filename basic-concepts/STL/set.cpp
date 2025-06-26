#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);

    for (auto p : s)
    {
        cout << p << " ";
    }
    cout << endl;
    s.erase(20);
    for (auto p : s)
    {
        cout << p << " ";
    }
}