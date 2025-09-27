// 2956 --> Find Common Elements Between Two Arrays
// Difficulty: Easy

/*You are given two arrays `nums1` and `nums2` of sizes `n` and `m`, respectively. Calculate the following values.
- answer1: the number of indices i such that nums1[i] exists in nums2.
- answer2: the number of indices i such that nums2[i] exists in nums1.

Return [answer1, answer2].

Example 1:
Input: nums1=[2,3,2], nums2=[1,2]
Output: [2,1]

Example 2:
Input: nums1=[4,3,2,3,1], nums2=[2,2,5,2,3,6]
Output: [3,4]
Explanation: The elements at indices 1,2, and 3 in nums1 exist in nums2 as well. So answer1 is 3.
The elements at indices 0,1,3, and 4 in nums2 exist in nums1. So answer2 is 4

Example 3:
Input: nums1 = [3,4,2,3], nums2 = [1,5]
Output: [0,0]
Explanation:
No numbers are common between nums1 and nums2, so answer is [0,0].

Constraints:
- n == nums1.length
- m == nums2.length
- 1 <= n, m <= 100
- 1 <= nunms1[i], nums2[i] <= 100

Topics: Array, Hash Table

*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2){
    set<int> s1(nums1.begin(), nums1.end()); // Store elements of nums1 in a set
    set<int> s2(nums2.begin(), nums2.end()); // Store elements of nums2 in a set

    int answer1 = 0, answer2 = 0;
    
    // Count elements in nums1 that exist in nums2 (answer1)
    for(int num: nums1){
        if(set2.count(num)>0) answer1++;
    }

    // Count elements in nums2 that exist in nums1 (answer2)
    for(int num: nums2){
        if(set1.count(num)>0) answer2++;
    }

    return {answer1, answer2};
}

/*
Time Complexity: O(m+n)
- O(n) for building the hash set from nums1.
- O(m) for building the hash set from nums2.
- O(n) for iterating through nums1 and checking if the elements are in set2.
- O(m) for iterating through nums2 and checking if the elements are in set1.

Space Complexity: O(n+m) for storing the hash sets (set1 and set2)
*/