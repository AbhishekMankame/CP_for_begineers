#include<iostream>
#include<vector>
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