// Leetcode 287 - Find the Duplicate Number
// Difficulty-Medium

/*Given an array of integers 'nums' containing 'n+1' integers where each integer is in the range '[1,n]' inclusive.
This is only one repeated number is 'nums' return this repeated number.
You must solve the problem without modifying the array 'nums' amd using only constant extra space.

Example 1:
Input: nums=[1,3,4,2,2]
Output: 2

Example 2:
Input: nums=[3,1,3,4,2]

Example 3:
Input: nums=[3,3,3,3,3]
Output: 3

Constraints:
- 1<=n<=1-^5
- nums.length==n+1
- 1<=nums[i]<=n
- All the integers in 'nums' appear only once expect for precisely one integer which appears two or more times

Follow up:
- How can we prove that atleast one duplicate number must exist in nums?
- Can you solve the problem in linear runtime complexity?

Topics: Array, Two pointers, binary search, bit manipulation
*/

// Let's solve it using brute force approach (O(n^2))