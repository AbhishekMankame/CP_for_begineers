// Find minimum in rotated sorted array:
/*
Problem: Given a rotated sorted array, find the minimum element in O(log N) time.
Explanation: In a rotated sorted array, the minimum element is the smallest element. The key observation is that the array is split into two sorted parts, and the minimum is the point of rotation.
We can use binary search to locate the rotation point.

-> If arr[mid] > arr[right], the minimum lies to the right, so we move the left pointer to mid+1
-> If arr[mid] <= arr[right], the minimum lies to the left, so we move the right pointer to mid

Time Complexity:
-> Best Case: O(1) (if the array is already sorted)
-> Average Case: O(log N)
-> Worst Case: O(log N)

*/


#include<iostream>
#include<vector>
using namespace std;

int findMin(const vector<int>& nums, int target){
    int left=0,right=nums.size()-1;
    while(left<right){
        if(arr[mid]>arr[right]){
            left=mid+1; // minimum is in the left half
        }
        else {
            right = mid; // minimum is in the right half (or at mid)
        }
    }
    return arr[left]; // left is the minimum element
}