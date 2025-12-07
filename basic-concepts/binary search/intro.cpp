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

