/*Question
1835. Find XOR Sum of All Pairs Bitwise AND

The XOR sum of a list is the bitwise XOR of all its elements. If the list only contains one element, then its XOR sum will be equal to its element. If the list only contains one element, then its XOR sum will be equal to this element.

- For example, the XOR sum of [1,2,3,4] is equal to `1 XOR 2 XOR 3 XOR 4 = 4`, and the XOR sum of [3] is equal to 3.
*/

#include <iostream>
using namespace std;
#include <vector>

int xorOfAnd(vector<int> a, vector<int> b)
{
    vector<int> xr;
    int x = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            xr.push_back(a[i] ^ b[j]);
        }
    }
    for (int i = 0; i < xr.size(); i++)
    {
        x = x ^ xr[i];
    }
    return x;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};
    cout << xorOfAnd(arr1, arr2) << endl;
}