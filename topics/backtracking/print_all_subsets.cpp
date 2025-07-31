// Printing all subsets of a set using backtracking
#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i) // Here we pass ans by reference as we don't want a copy (as we want to make changes in the same subset)
{
    if (i == arr.size())
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i + 1);

    ans.pop_back(); // Backtrack // Popping back before exclusion
    // exclude
    printSubsets(arr, ans, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store subsets

    printSubsets(arr, ans, 0); // here 0 is index from where we will start
    return 0;
}