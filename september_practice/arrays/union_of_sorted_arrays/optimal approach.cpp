// Union of sorted arrays: Optimal approach
// As both the arrays are sorted, we will solve it using `two pointers` approach

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            if(unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(j < n2) {
        if(unionArr.size() == 0 || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    while(i < n1) {
        if(unionArr.size() == 0 || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
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
TC: O(n1 + n2) --> Here we will be visiting all the elements exactly once.

SC: O(n1 + n2) --> In the worst case, if all the elements are unique.
Note: Here this too O(n1 + n2) space is taken to return the answer, not to solve the answer. Explicitly mention this point to the interviewer.
*/