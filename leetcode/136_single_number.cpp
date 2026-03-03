// Leetcode 136 - Single Number
// https://leetcode.com/problems/single-number/description/

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans=0;
    for(int i:nums) ans^=i;
    return ans;
}

// TC: O(n)
// SC: O(1)