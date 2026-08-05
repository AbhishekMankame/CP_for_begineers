// https://leetcode.com/problems/contains-duplicate-ii/description/

// Leetcode 219 - Contains Duplicate II

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
class Solution {
public:
    bool containNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n&&j<=i+k;j++){
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;
    }
};