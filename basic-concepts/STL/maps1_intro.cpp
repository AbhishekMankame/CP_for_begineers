#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["tv"] = 100;
    m["camera"] = 50;
    m["fridge"] = 90;

    m.insert({"mobile", 20});
    m.emplace("radio", 25);

    for (auto p : m)
    {
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}
