#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["tv"] = 100;
    m["camera"] = 50;
    m["fridge"] = 90;

    for (auto p : m)
    {
        cout << p.first << ", " << p.second << endl;
    }
}
