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
    cout<<ans<<endl;
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
}

// TC: O(b log n + n) == O(n log n)
// SC: O(1)