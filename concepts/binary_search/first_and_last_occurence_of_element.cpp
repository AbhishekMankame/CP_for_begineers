// First and last occurrences of element in sorted array

/* 
To find the first and last occurrences of an element in a sorted array efficiently, we can use binary search.

Why binary search?
- Since the array is sorted, binary search can find positions in O(log n) time.
- Using two variations of binary search we can find the first and last occurrences sepeartely.
*/

#include<iostream>
#include<vector>
using namespace std;

int firstOccurrnece(const vector<int>& nums, int target){
    int low=0, high=(int)nums.size()-1;
    int result=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            result=mid; // potential answer found
            high = mid-1; // look for earlier occurrnece
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return result;
}

int lastOccurrence(const vector<int> &nums, int target){
    int low=0,high=(int)nums.size()-1;
    int result=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            result=mid; // potential answer found
            low=mid+1; // look for later occurrence
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return result;
}