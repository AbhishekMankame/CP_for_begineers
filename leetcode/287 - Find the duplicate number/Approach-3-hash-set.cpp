// Using Hash Set O(n)
// Idea: Use a hash set to track seen numbers.

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums){
    unordered_set<int> seen;
    for(int num:nums){
        if(seen.count(num)) return num;
        seen.insert(num);
    }

    return -1;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
// Not allowed due to extra space