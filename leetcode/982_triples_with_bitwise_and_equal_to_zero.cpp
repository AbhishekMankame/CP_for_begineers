// Leetcode 982 - Triples with Bitwise AND Equal To Zero
// Hard
/*
Given an integer array nums, return the number of AND triplets.
An AND triple is a triple of indices (i,j,k) such that:
- 0 <= i < nums.length
- 0 <= j < nums.length
- 0 <= k < nums.length
- nums[i] && nums[j] && nums[k] == 0, where & represents the bitwise-AND operator.

Example 1:
Input: nums = [2,1,3]
Output: 12
Explanation:
We could choose the following i,j,k triplets:
(i=0, j=0, k=0) : 2 & 2 & 1
(i=0, j=1, k=0) : 2 & 1 & 2
(i=0, j=1, k=1) : 2 & 1 & 1
(i=0, j=1, k=2) : 2 & 1 & 3
(i=0, j=2, k=1) : 2 & 3 & 1
(i=1, j=0, k=0) : 1 & 2 & 2
(i=1, j=0, k=1) : 1 & 2 & 1
(i=1, j=0, k=2) : 1 & 2 & 3
(i=1, j=1, k=0) : 1 & 1 & 2
(i=1, j=2, k=0) : 1 & 3 & 2
(i=2, j=0, k=1) : 3 & 2 & 1
(i=2, j=1, k=0) : 3 & 1 & 2

Example 2:
Input: nums = [0,0,0]
Output: 27

Constraints:
- 1 <= nums.length <= 1000
- 0 <= nums[i] < 2^16

Topics: Array, Hash Table, Bit Manipulation
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countTriplets(vector<int>& nums){
    // Maximu possible value for 16-bit numbers
    // 2^16 = 65536
    const int MAX = 1<<16;

    // freq[mask] stores how many times (nums[i]&nums[j])==mask occurs
    vector<int> freq(MAX,0);

    /*
    Step 1: Compute bitwise AND for all pairs (i, j) and count their frequencies.
    */
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            int andValue = nums[i]&nums[j];
            freq[andValue]++;
        }
    }

    int result=0;

    // Step 2: For each nums[k], check all previously computer AND results.
    // If (mask & nums[k])==0 then (nums[i]&nums[j]&nums[k])==0

    for(int k=0;k<nums.size();k++){
        for(int mask=0;mask<MAX;mask++){
            if((mask&nums[k]])==0) result+=freq[mask];
        }
    }
    return result;
}

/*
Time Complexity:
O(n^2 + n*2^16) ---> O(n^2)

Space Complexity: 
O(2^16) ---> O(1) // Constant extra space

*/