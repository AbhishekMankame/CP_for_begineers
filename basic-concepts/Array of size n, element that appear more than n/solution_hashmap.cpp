// Given Array of size n and a number k, find all elements that appear more than n/k times
/*Input: arr[] = [3, 4, 2, 2, 1, 2, 3, 3], k = 4
Output: [2, 3]
Explanation: Here n/k is 8/4 = 2, therefore 2 appears 3 times in the array that is greater than 2 and 3 appears 3 times in the array that is greater than 2
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void morethan(vector<int> &arr, int k)
{
    int n = arr.size();
    int x = n / k;

    // unordered_map initialization
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Traversing the map
    for (auto i : freq)
    {
        // Checking if value of key-value pair is greater than x (where x=n/k)
        if (i.second > x)
        {
            cout << i.first << endl;
        }
    }
}

int main()
{
    vector<int> arr = {3, 4, 2, 2, 1, 2, 3, 3};
    int k = 4;
    morethan(arr, k);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
/*
- First, make a frequency map of all the elements in the array
- Then traverse the map and check the frequency of every element
- If the frequency is greater than n/k then print the elements
*/