// Code for Second largest element in sorted array

// Brute Force approach

#include<iostream>
using namespace std;

int secondLargestBruteForce(int arr[], int n){
    if(n<2) return -1; // Not enough elements

    int largest = arr[0];

    // Find the largest element
    for(int i=1;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }

    int secondLargest = -1;

    // Find the largest element smaller than the largest
    for(int i=0;i<n;i++){
        if(arr[i]!=largest){
            if(secondLargest==-1 || arr[i]>secondLargest){
                secondLargest = arr[i];
            }
        }
    }
    return secondLargest;
}

/*
Note: Works, but two passes through the array
- For each element, check if it is the largest
- Then find the largest element less than the maximum (i.e., second largest)

Time Complexity: O(n^2)
Space Complexity: O(1)

*/