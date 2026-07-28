// Here we are using an array of size 256 (ASCII) to store frequencies.

#include <iostream>
#include <string>
using namespace std;

void printRepeatingChars(string str)
{
    int freq[256] = {0}; // For all ASCII characters

    for (char ch : str)
    {
        freq[(int)ch]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 1)
        {
            cout << char(i) << " ";
        }
    }
}

int main()
{
    string name;
    cin >> name;
    printRepeatingChars(name);

    return 0;
}

// Time Complexity - O(n)
// Space Complexity - O(1)