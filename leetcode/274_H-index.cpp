// Leetcode 274 - H-index
// Medium

/*
Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.
According to the definition of h-index on wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

Example 1:
Input: citations = [3,0,6,1,5]
Output: 3
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3,0,6,1,5 citations respectively.
Since the researcher has 3 papers with atleast 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.

Example 2:
Input: citations=[1,3,1]
Output: 1

Constraints:
- n==citations.legth
- 1<=n<=5000
- 0<=citations[i]<=1000

Topics: Array, Sorting, Counting Sort

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int hIndex(vector<int>& citations){
    sort(citations.begin(),citations.end(),greater<int>()); // Sort in descending order
    int n=citations.size();
    int left=0.right=n-1;
    int ans=0;

    // Binary search to find the H-index
    while(left<=right){
        int mid=left+(right-left)/2;
        if(citations[mid]>=mid+1) { // There are at least mid+1 papers with citations >= citations[mid]
            ans=mid+1; // This could be a potential H-index
            left=mid+1; // Try to find a higher H-index
        }
        else {
            right=mid-1; // Otherwise, move the search range to the left
        }
    }

    return ans;
}