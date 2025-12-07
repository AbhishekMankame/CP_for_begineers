// Binary Search



#include<iostrean>
#include<vector>
#include<algorithm>

// Iterative Approach

int binarySearch(const vector<int>& arr, int target){
    int left=0,right=arr.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;    // safe midpoint

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left = mid+1;
        }
        else {
            right=mid-1;
        }
    }

    return -1;  // not found
}


// Recursive Approach
int binarySearchRec(const vector<int>& arr, int left, int right, int target){
    if(left>right) return -1;

    int mid = left + (right - left)/2;

    if(arr[mid]==target) return mid;
    if(arr[mid]<target) return binarySearchRec(arr,mid+1,right,target);
    else binarySearchRec(arr,left,mid-1,target);
}
