/*What is a Strobogrammatic Number?
A number is strobogrammatic if it looks the same when rotated 180 degrees.
For example:
- Valid: 69, 96, 00, 88
- Invalid: 23, 962, 110

The valid digit pairs are:
- 0 <-> 0
- 1 <-> 1
- 6 <-> 9
- 8 <-> 8
- 9 <-> 6

Variations of Strobogrammatic Problems
1. Check if a number is strobogrammatic
2. Generate all strobogrammatic numbers of length `n`
3. Count strobogrammtic numbers within a range `[low, high]`

*/

// Check if a number is strobogrammatic
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string num)
{
    unordered_map<char, char> mp = {{'0', '0'}, {'1', '1'}, {'6', '9'}, {'9', '6'}, {'8', '8'}};
    int l = 0, r = num.size() - 1;

    while (l <= r)
    {
        if (mp.find(num[l]) == mp.end() || mp[num[l]] != num[r])
            return false;
        l++;
        r--;
    }

    return true;
}