/*
Intersection of two arrays: Optimal approach
As both the arrays are sorted, we will be using `two pointers` approach.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            i++; // As a[i] does not have any partner or equivalent element
        }
        else if(a[i] > b[j]) {
            j++; // As b[j] does not have any partner or equivalent element
        }
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

// TC: O(n1 + n2)
// SC: O(1)