/*
Binary Search --> It is a searching algorithm that finds the position of any element in a sorted array in logarithmic time.
- It works by repeatedly dividing the search interval in half.
- If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
- Otherwise, narrow it to the upper half.
- Repeatedly check until the value is found or the interval is empty.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] < to_find)
            lo = mid + 1;
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == to_find)
    {
        cout << lo << endl;
    }
    else if (v[hi] == to_find)
    {
        cout << hi << endl;
    }
    else
    {
        cout << "Not found!!!" << endl;
    }
}

// Time Complexity: log(n)