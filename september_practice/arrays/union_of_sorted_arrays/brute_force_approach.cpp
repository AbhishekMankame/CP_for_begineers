// Union of two sorted arrays: Brute force approach

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    for(int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    vector<int> unionArr;

    for(int i : st) {
        unionArr.push_back(i);
    }

    return unionArr;
}

int main() {
    vector<int> a = {1, 1, 2, 3, 4, 5, 7};
    vector<int> b = {2, 3, 4, 5, 6};
    vector<int> result = sortedArray(a, b);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
}

/*
TC: O(n1 log n) + O(n2 log n) + O(n1 + n2)
Where `n1` is the size of array `a`
`n2` is the size of array `b`
`n` is the size of set `st`

SC: O(n1 + n2) + O(n1 + n2)
Where first O(n1 + n2) is for `set`, in the worst case all the elements in the arrays are unique.
Second O(n1 + n2) is for output array `unionArr`, in the worst case all the elements are unique.

*/