// Leetcode 3759 - Count Elements with at least K greater values
// Medium

/*
You are given an integer array nums of length n and an integer k.
An element in nums is said to be qualified if there exist at least k elements in the array that are strictly greater than it.
Return an integer denoting the total number of qualified elements in nums.

Example:
Input: nums = [3,1,2], k=1
Output: 2
Explanation: The element 1 and 2 each have at least k=1 element greater than themselves.
No element is greater than 3. There, the answer is 2.

Example 2:
Input: nums=[5,5,5],k=2
Output: 0
Explanation" Since all elements are equal to 5, no element is greater than the other. Therefore, the answer is 0.

Constraints:
- 1 <= n == nums.length <= 10^5
- 1 <= nums[i] <= 10^5
- 0 <= k < n

*/