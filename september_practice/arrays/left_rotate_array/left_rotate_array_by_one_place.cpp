#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> &a) {
    int n = a.size();
    int temp = a[0];
    for(int i = 1; i < n; i++) {
        a[i - 1] = a[i];
    }

    a[n - 1] = temp;

    return a;
}

/* 
TC: O(n)
SC: O(1)
*/