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

/* Time complexity:
Let n = s.length()
There are two nested loops:
1. First inner loop (to check if character was already printed):
- Runs i times in the worst case
2. Second inner loop (to check if the character repeats):
- Runs n - i - 1 time in the worst case

So total Time Complexity = O(n^2)

Space Complexity:
We are not using any extra data structures (like arrays, maps, sets, etc).
Space Complexity = O(1) --> constant extra space
*/