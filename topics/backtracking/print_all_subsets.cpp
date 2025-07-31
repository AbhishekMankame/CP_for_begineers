// Printing all subsets of a set using backtracking
#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &res, int i) // Here we pass ans by reference as we don't want a copy (as we want to make changes in the same subset)
{
    if (i == arr.size())
    {
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store subsets

    printSubsets(arr, ans, 0); // here 0 is index from where we will start
    return 0;
}