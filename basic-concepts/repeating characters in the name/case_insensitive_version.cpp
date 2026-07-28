
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

/* Time Complexity
1. First loop (count & track order): O(n)
2. Second loop (print once per character in order): O(n)
    - Max 26 in only lowercase letters

Total Time = O(n)

Space Complexity
1. `unordered_map<char, int>
    - Worst case = all unique lowercase letters = O(1) (bounded by 26)
2. `vector<char> order
    - Max 26 entries for ASCII letters --> O(1)

Space: O(1) for ASCII
(If you include full Unicode -> would be O(n))

*/