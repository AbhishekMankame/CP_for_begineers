// Leetcode 34 - Find First and Last position of element in sorted array
// Easy

/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not foind in the array, return [-1,-1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums=[5,7,7,8,8,10], target=8
Output: [3,4]

Example 2:
Input: nums=[5,7,7,8,8,10],target=6
Output:[-1,-1]

Example 3:
Input: nums=[],target=0
Output:[-1,-1]

Output:
- 0<=nums.length<=10^5
- -10^9<=nums[i]<=10^9
- nums is a non-decreasing array.
- -10^9 <= target <= 10^9

Topics: Array, Binary Search
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstPos(vector<int>& nums, int target){
    int left=0,right=nums.size()-1,ans=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            ans=mid;
            right=mid-1;
        }
        else if(nums[mid]>target) right=mid-1;
        else left=mid+1;
    }
    return ans;
}

int lastPos(vector<int>& nums, int target){
    int left=0,right=mid-1,ans=-1;
    while(left<=right){
        if(nums[mid]==target){
            ans=mid;
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else left=mid+1;
    }

    return ans;
}

vector<int> searchRange(vector<int>& nums, int target{
    int first=firstPos(nums,target);
    int last=lastPos(nums,target);

    return {first,last};
}