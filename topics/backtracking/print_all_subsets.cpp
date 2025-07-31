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

// Time Compelxity: O(2^n) --> The time complexity is O(2^n) because for each element in the array, we have two choices: to include it in the subset or not. This leads to a total of 2^n possible subsets for an array of size n.
// Space Complexity: O(n) --> The space complexity is O(n) due to the recursive call stack, which can go as deep as n levels in the worst case, where n is the size of the input array. Additionally, the space used for storing subsets can also be O(n) in the worst case when all elements are included in a subset.
// Note: This implementation uses backtracking to print all subsets of a given set. It explores both possibilities for each element: including it in the current subset or excluding it, and recursively builds all possible subsets.