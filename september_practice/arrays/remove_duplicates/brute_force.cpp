// Remove duplicate elements from array: Brute Force approach

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicateElements(vector<int> &a) {
    int n = a.size();
    set<int> st;

    for(int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    int index = 0;
    for(auto it : st) {
        a[index] = it;
        index++;
    }

    return a;
}

// TC: O(n log n) + O(n) == O(n log n)
// SC: O(n)