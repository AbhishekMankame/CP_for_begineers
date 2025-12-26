// Leetcode 611 - Valid Trianle Number
// Medium

/*
Given an integer array nums, return the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.

Example 1:
Input: nums = [2,2,3,4]
Output: 3
Explanation: Valid combinations are:
2,3,4 (using the first 2)
2,3,4 (using the second 2)
2,2,3

Example 2:
Input: nums = [4,2,3,4]
Output: 4

Constraints:
- 1 <= nums.length <= 1000
- 0 <= nums[i] <= 1000

Topics: Array
Two Pointers
Binary Search
Greedy
Sorting
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int traingleNumber(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int count=0;

    for(int right=n-1;right>=2;right--){
        int left=0,mid=right-1;
        while(left<mid){
            if(nums[left]+nums[mid]>nums[right]){
                count+=(mid-left);
                mid--;
            }
            else left++;
        }
    }
    return count;
}

/*
Overall Time Complexity: O(N^2)
Sorting: O(n log n)
Two-pointer loop: O(n^2)
*/

// Space Complexity: O(1)

/*

Most important note: Here we have count+=(mid-left) because
For a sorted array, if nums[left] + nums[mid] > nums[right], then all indices between left and mid - 1 also form valid triangles with mid and right.

Edge cases are handled implicitly:
- Arrays with size < 3 --> return 0
- Zeroes are safe (triangle inequality fails naturally)

*/

/*
Some interview explanation got from GPT

1. One-Line High-Level Answer (30 seconds)
Use this if the interviewer just says "Explain you approach"
"I sort the array and fix the largest side of the triangle. Then I use a two-pointer technique to count how many pairs of smaller sides satisfy the triangle inequality in O(n^2) time"

2. Key Insight (This Impresses Interviewers ⭐)

Say this explicitly — it shows algorithmic thinking.

“The key insight is that after sorting, when the smallest and middle values form a valid triangle with the largest value, all values in between will also work.
That’s why we can count multiple triangles at once instead of checking each one individually.
*/