/*Question
1835. Find XOR Sum of All Pairs Bitwise AND

The XOR sum of a list is the bitwise XOR of all its elements. If the list only contains one element, then its XOR sum will be equal to its element. If the list only contains one element, then its XOR sum will be equal to this element.

- For example, the XOR sum of [1,2,3,4] is equal to `1 XOR 2 XOR 3 XOR 4 = 4`, and the XOR sum of [3] is equal to 3.
*/

#include <iostream>
#include <vector>
using namespace std;

int getXORSum(vector<int> &arr1, vector<int> &arr2)
{
    int a = 0, b = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        a = a ^ arr1[i];
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        b = b ^ arr2[i];
    }

    return a & b;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4}, arr2 = {5, 6, 7, 8};
    // for (auto i : arr1)
    // {
    //     cin >> i;
    // }
    // for (auto i : arr2)
    // {
    //     cin >> i;
    // }
    cout << getXORSum(arr1, arr2) << endl;
}