// Sorting - O(nlogn)
// Idea - Sort the array and check adjacent elements
// Not allowed if the array is read-only

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            return nums[i];
        }
    }
    return -1;
}

// Time Complexity: O(n logn)
// Space Complexity: O(1) depends on sorting algorithm
// Not allowed due to modifying the input.