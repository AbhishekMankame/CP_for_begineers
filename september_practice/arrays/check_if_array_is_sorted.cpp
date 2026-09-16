#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &a) {
    int n = a.size();
    bool sorted = true;
    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i - 1]) {}
        else return false;
    }
}

// TC: O(n)