#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int getXORSum(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> arr;
        for (int i = 0; i < arr1.size(); i++)
        {
            for (int j = 0; j < arr2.size(); j++)
            {
                arr.push_back(arr1[i] & arr2[j]);
            }
        }
        int x = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            x = x ^ arr[i];
        }
        return x;
    }
};