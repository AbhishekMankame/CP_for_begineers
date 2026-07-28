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
        cout << p.first << " " << p.second << endl;
    }
    cout << "count: " << m.count("camera") << endl; // kitne keys hamari map mei exist karti jinki value camera hai
    // It does not return the value of camera, it returns the number or count of instances jo hamari key ke saath associated hai

    cout << m["camera"] << endl; // camera ki corresponding value print ho jaayegi

    m.erase("tv"); // Erase the value
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    // find humari kisi bhi key value pair ko dhunde ke koshish karta hai, if it is found then uaka iterator return hoke aata hai, else if key is not found then we will get m.end()
    if (m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}
