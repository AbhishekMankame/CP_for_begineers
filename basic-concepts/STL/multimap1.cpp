// Multimap: Unlike map here we can store the multple keys, means we can create duplicate keys
// Note: Here we cannot square bracket notations []
// We have to use insert function to insert the data.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    ;
    multimap<string, int> m;
    m.emplace("tv", 50);
    m.emplace("tv", 45);
    m.emplace("tv", 45);
    m.emplace("fridge", 35);
    m.emplace("camera", 10);

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    // m.erase("tv"); // It will erase all the keys matching with tv
    m.erase(m.find("tv"));
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    // If we need to erase the only one instance of tv, then we can pass the iterator

    return 0;
}