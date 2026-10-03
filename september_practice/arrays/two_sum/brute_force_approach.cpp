// Two Sum --> Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> a, int target) {
    int n = a.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                return {a[i], a[j]};
            }
        }
    }
}

// TC: O(N ^ 2)
// SC: O(1)