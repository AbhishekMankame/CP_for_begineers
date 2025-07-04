/*Print the repeating characters in the given word*/
// Here in brute-force approach we will use the concept of nested loop to solve it

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        bool already = false;

        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                already = true;
                break;
            }
        }
        if (already)
        {
            continue;
        }
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                cout << s[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}