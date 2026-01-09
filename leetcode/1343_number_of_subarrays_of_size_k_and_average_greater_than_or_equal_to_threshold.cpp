// Leetcode 1343 - Number of Sub-arrays of size K and average greater than or equal to threshold
// Medium

/*
Given an array of integers 'arr' and two integers 'k' and 'threshold', return the number of sub-arrays of size 'k' and average greater than or equal to 'threshold'.

Example 1:
Input: arr = [2,2,2,2,5,5,5,8], k=3, threshold=4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).

Example 2:
Input: arr = [11,13,17,23,29,31,7,5,2,3], k=3, threshold=5
Output: 6
Explanation: The first 6 sub-arrays of size 3 have averages greater than 5. Note that averages are not integers.

Constraints:
- 1<=arr.length<=10^5
- 1<=arr[i]<= 10^4
- 1<=k<=arr.length
- 0<=threshold<=10^4

Topics: Array, Sliding Window
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int numOfSubarray(vector<int>& nums, int k, int threshold){
    int n=arr.size();
    int windowSum=0;
    int count=0;
    for(int i:nums) windowSum+=i;
    if(windowSum>=threshold*k) count++;
    for(int i=k;i<n;i++){
        windowSum+=arr[i];
        windowSum-=arr[i-k];
        if(windowSum>=threshold*k) count++;
    }
    return count;
}