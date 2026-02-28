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
    cout<<second_largest<<endl;
}

// TC: O(N) + O(N) == O(2N) ==> O(N)
// SC: O(1)