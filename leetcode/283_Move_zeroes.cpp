// Leetcode 283 - Move Zeroes
// Easy

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums=[0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
1 <= nums.length <= 10^4
-2^31 <= nums[i] <= 2^31

Follow up: Could you minimize the total number of operations done?
*/

#include<iostream>
#include<vector>
using namespace std;

void moveZeroesBruteForce(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

void moveZeroesOptimized(vector<int> &nums){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[count]);
            count++;
        }
    }
}