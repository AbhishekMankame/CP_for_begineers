// Checking whether the given string is palindrome or not
// Palindrome refers to a string or sequence of characters that reads the same forwards and backwards.

#include <iostream>
using namespace std;

bool isPal(string &s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    return (s[start] == s[end]) && isPal(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    cout << isPal(s, 0, s.size() - 1) << endl;
    return 0;
}