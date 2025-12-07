// Binary Search

/*
Binary Search is an efficient algorithm used to find the position of a target element in a sorted array by repeatedly dividing the search interval in half. The algorithm starts by comparing the target value with the middle element of the array.
If the target matches the middle element, the search ends. If the target is smaller, the search continues in the left half; if larger, it continues in the right half. This having process continues until the target is found or the search space is exhausted.
Binary Search runs in O(log n) time and requires O(1) extra space in its iterative form. It is widely used in search problems, optimization problems, and as a foundation for advanced techinques like binary search on answer, first/last occurrence search, and searching in rotated arays.


*/



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

/*
Time Space: O(log n)
Space Complexity: O(1) iterative, O(log n) recursive (stack)

*/
