// Leetcode 2089 - Find Target Indices After Sorting Array
// Easy

/*
You are given a 0-indexed integer array 'nums' and a target element 'target'.
A target index is an index 'i' such that 'nums[i]==target'.
Return a list of the target indices of 'nums' after sorting 'nums' in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.

Example 1:
Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.

Example 2:
Input: nums = [1,2,5,2,3], target = 3
Output: [3]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 3 is 3.

Example 3:
Input: nums = [1,2,5,2,3], target = 5
Output: [4]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 5 is 4.

Constraints:
- 1<=nums.length<=100
- 1<=nums[i],target<=100

Topics: Array, Binary Search, Sorting
*/

#include<iostream>
#include<vector>
using namespace std;

int lowerbound1(vector<int>& nums, int target){
    int left=0,right=nums.size()-1,ans=-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(nums[mid]==target){
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;
    }

    return ans;
}

int upperbound1(vector<int>& nums,int target){
    int left=0,right=nums.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]>target){
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;
    }

    return ans;
}

vector<int> targetIndices(vector<int>& nums, int target){
    sort(nums.begin(),nums.end());
    int low=lowerbound1(nums,target);
    int upp=upperbound1(nums,target);
    vector<int> res;
    if(low==upp) return res;

    for(int i=low;i<upp;i++){
        res.push_back(i);
    }

    return res;
}