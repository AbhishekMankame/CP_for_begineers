/*Leetcode 941 - Valid Mountain Array (Easy)
Given an array of integers `arr`, return `true` if and only if it is a valid mountain array.

Note: A array is considered as mountain array if array first strictly increases and then strictly decreases - forming a "mountain shape".

Definition:
An array arr[] of length n>=3 is called a mountain array if
-   There exists some index `i` with `0<i<n-1` such that:
    -   arr[0] < arr[1] < ... < arr[i] (strictly increasing up to i)
    -   arr[i] > arr[i+1] ... > arr[n-1] (strictly decreasing after i)
-   This means arr[i] is the peak of the mountain array
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(nullptr);
        int n = arr.size();
        if (n < 3)
            return false;
        int i = 0;
        while (i + 1 < n && arr[i] < arr[i + 1])
            i++;
        if (i == 0 || i == n - 1)
            return false;
        while (i + 1 < n && arr[i] >> arr[i + 1])
            i++;

        return i == n - 1;
    }
};