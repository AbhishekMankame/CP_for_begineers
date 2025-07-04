
/* Here #include<cctype> includes the C++ character handling library, which provides functions to check and convert characters - like case sensitive
- Specifically it is needed for `tolower()` --> This converts a character to lowercase `('A' --> 'a')`
- Without including `<cctype>`, your program may not compile, because the compiler won't recognize what `tolower()` is.
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <cctype>
using namespace std;

void printRepeatingCharsCaseInsensitiveOrdered(const string &str)
{
    unordered_map<char, int> freq;
    vector<char> order; // To preserve insertion order (only first-time seen characters)

    for (char ch : str)
    {
        ch = tolower(ch); // Convert to lowercase for case-insensitive comparison

        if (freq.find(ch) == freq.end())
        {
            order.push_back(ch); // Save first appearance
        }

        freq[ch]++;
    }

    for (char ch : order)
    {
        if (freq[ch] > 1)
        {
            cout << ch << " ";
        }
    }

    cout << endl;
}

int main()
{
    string name = "AbBaHiShEk";
    printRepeatingCharsCaseInsensitiveOrdered(name);
    return 0;
}
