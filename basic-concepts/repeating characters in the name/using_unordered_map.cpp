#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void printRepeatingChar(string str)
{
    unordered_map<char, int> mp;
    for (char ch : str)
    {
        mp[ch]++;
    }

    for (auto pair : mp)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " ";
        }
    }
}

int main()
{
    string name;
    cin >> name;
    printRepeatingChar(name);
    return 0;
}