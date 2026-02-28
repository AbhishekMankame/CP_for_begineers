#include<iostream>
#include<vector>
#include<algorithms>
using namespace std;

// Largest element in an array:
// Brute Force approach: Sort the array and pring the last element

// Optimized approach
int largestElement(int arr, int n){
    int ans=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>ans) ans=a[i];
    }
    return ans;
}

// TC: O(n)
// SC: O(1)


// Second largest element in an array
/*
a = [1,2,4,7,,7,5]

Brute Force approach: 
- We will sort the array ==> a = [1,2,4,5,7,7]
- We know that the largest element will be a[n-1]
- But we cannot say that second last element aka a[n-2] is second largest, as there can be multiple occurrences of largest element

*/

int secondLargestBrute(vector<int>& arr){
    sort(arr.begin(),arr.end()); // Sorting takes O(n log n) time
    int n = arr.size();
    int largest=arr[n-1],second_largest=0;

    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            second_largest=a[i];
            break;
        }
    }
    return second_largest;
}

// TC: O(b log n + n) == O(n log n)
// SC: O(1)

/*
Better approach:
- First pass and we will find the largest element
- We will keep largest as arr[0] ==> largest = arr[0]
- And we will keep second_largest as -1
- It will check the elements and make sure it is less than the largest

*/

int secondLargestBetter(vector<int> &arr){
    int n=arr.size();
    int largest=arr[0],second_largest=-1;
    for(int i=1;i<n;i++){
         if(arr[i]>largest) largest=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest && arr[i]!=largest) second_largest=arr[i];
    }
    return second_largest;
}

// TC: O(N) + O(N) == O(2N) ==> O(N)
// SC: O(1)


/*
Optimal approach:
- We will consider first element as the largest => largest = arr[0]
- Second largest we will consider as INT_MIN ==> second_largest = INT_MIN
- Now we will check at first index (second element), if it is greater than largest, then that element will be the largest and the previous largest will become second_largest
- Note: If any element is equivalent to largest, then do not do anything

*/

int secondLargestOptimal(vector<int> &arr){
    int n=arr.size();
    int largest=arr[0],second_largest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest) {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}

/*
Complexity details:
Here in optimal solution to find the second largest just takes one pass => O(N)
TC: O(N)
SC: O(1)

*/

