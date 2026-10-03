// Two sum - better approach
// Here we will use hashmap to solve the problem

#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target) {
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()) {
            return "YES";
            /* If we need to return the index, then 
            return {mpp[more], i};*/
        }
        mpp[a] = i;
    }
    return "NO";
}

// TC: O(N * log N) --> For ordered map
// For unordered map --> TC: O(N) in genral, O(N^2) in worst case
// SC: O(N)