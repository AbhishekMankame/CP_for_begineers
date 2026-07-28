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

/*
Complexity:

Time Complexity:
1. firstPos Method:
- Purpose: Find the first occurrence of the target in the nums array.
- Approach: It uses binary search to find the first occurrence of the target. The binary search continues as long as the left pointer is less than or equal to the right pointer.
When the target is found, it updates ans and moves the right pointer to mid-1 to continue searching in the left half of the array (which ensures it's first occurrence).
- Time Complexity: Since it performs a binary search over the array, it runs in O(log n) time, where n is the size of the nums array.

2. lastPos Method:
- Purpose: Finds the last occurrence of the target in the nums array.
- Approach: Similar to firstPos, this method performs binary search but instead of moving the right pointer to mid-1, it moves the left pointer to mid+1 when the target is foud. This ensures it looks for the last occurrence in the right half of the array.
- Time Complexity: Like firstPos, it also uses binary search, so it runs in O(log n)

3. searchRange MethodL
- Purpose: Calls both firstPos and lastPos to find the range (first and last position) of the target in the nums array.
- Time Complexity: Since both firstPos and lastPos each run in O(log n) time, the overall time complexity of the searchRange method is O(log n)

Overall Time Complexity:
- The total time complexity for the searchRange method is O(log n) because it calls two binary search methods (firstPos and lastPos), each of which runs in O(log n) time.
Thus, the overall time complexity of this code is O(log n)

Space Complexity:
- The space complexity of this code is O(1) because the algorithm uses a constant amount of extra space. 
The space used by the input and output(vector) is not considered part of the algorithm's space complexity.

Time Complexity: O(log n)
Space Complexity: O(1)
*/