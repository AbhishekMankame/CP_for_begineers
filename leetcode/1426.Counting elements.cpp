// Leetcode 1426. Counting elements
// Given an integer array `arr`, count how many elements `x` there are, such that `x+1` is also in `arr`. If there are duplicates in `arr`, count them separately.

/*
Input: arr = [1, 2, 3]
Output: 2
Explantion: 1 and 2 are counted because 2 and 3 are in arr.
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int countElements(vector<int> &arr)
{
    set<int> s(arr.begin(), arr.end());

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.count(arr[i] + 1))
        {
            count++;
        }
    }

    return count;
}

// Time Complexity: O(n) --> We traverse the array once to insert elements into the set and once more to count the elements, resulting in a linear time complexity.
// Space Complexity: O(n) --> The space complexity is determined by the set, which can store up to n unique elements in the worst case.