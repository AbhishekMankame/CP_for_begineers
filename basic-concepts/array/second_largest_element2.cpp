// Code for Second largest element in sorted array

// Brute Force approach

#include<iostream>
#include<limits.h>
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

// Optimized Approach
/*
Idea:
- Use a single traversal to track both the largest and second largest elements.

Time Complexity: O(n)
Space Complexity: O(1)
*/

int secondLargestOptimal(int arr[], int n){
    if(n<2) return -1; // Not enough elements

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest; // update second largest
            largest = arr[i]; // update largest
        }
        else if(arr[i]>secondLargest && arr[i]!=largest) {
            secondLargest = arr[i]; // update second largest if arr[i] is less than largest but greater than current second largest
        }
    }

    if(secondLargest==INT_MIN) return -1; // no second largest found
    return secondLargest;
}