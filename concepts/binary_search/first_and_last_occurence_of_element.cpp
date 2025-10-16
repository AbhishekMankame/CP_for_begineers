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

int main(){
    vector<int> nums = {1,2,2,2,3,4,5};
    int target=2;
    int first=firstOccurrnece(nums,target);
    int last=lastOccurrence(nums,target);
    cout<<"First occurrence of "<<target<<" is at index: "<<first<<endl;
    cout<<"Last occurrence of "<<target<<" is at index: "<<last<<endl;

    return 0;
}

/*
Time Complexity:
- Each function ('firstOccurrence' and 'lastOccurrence') performs a binary search.
- Binary search runs in O(log n) time, where n is the size of the array.
- Since you run two seperate binary searches, total time is:
        O(log n) + O(log n) = O(log n)
    which simplifies to O(log n) overall

Space Complexity:
- The code uses a constant number of variables (low, high, mid, result).
- No extra data structures proportional to input size are used.
- So the space complexity is: O(1) (i.e., constant extra space)


*/