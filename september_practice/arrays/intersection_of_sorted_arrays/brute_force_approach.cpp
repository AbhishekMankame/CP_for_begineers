// Intersection of two sorted arrays using brute force approach

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans;
    int vis[n2] = {0};

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j] && vis[j] == 0) {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}

/* 
TC: O(n1 + n2)
SC: O(n2)
*/