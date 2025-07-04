#include <iostream>
#include <unordered_map>
#include <set>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void printRepeatingCharsOrdered(string str)
{
    unordered_map<char, int> freq;
    set<char> order;

    for (char ch : str)
    {
        freq[ch]++;
        order.insert(ch);
    }

    for (char ch : str)
    {
        if (freq[ch] > 1)
        {
            cout << ch << " ";
            freq[ch] = 0; // Avoid printing again
        }
    }
}

int main()
{
    string name = "abhishek";
    printRepeatingCharsOrdered(name);
    return 0;
}

// Time Complexity - O(n) --> To passes over the string
// Space Complexity - (n) --> Fixed 256-sized map for ASCII