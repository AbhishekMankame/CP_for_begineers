/*
What is Sorting?
Sorting algorithm take unsorted array in random order, and output that number in increasing order or in decreasing order.

Example:
Unsorted Array
a = {10, 12, 5, 4, 1, 3, 2};

Sorted Array in Increasing Order
a = {1, 2, 3, 4, 5, 10, 12}

Sorted Array in Decreasing Order
a = {12, 10, 5, 4, 3, 2, 1}

Bubble Sort
Key Idea: Take larger element to the end by repeatedly swapping the adjacent elements.
It is inspired by forming of bubbles when we heat the water.

Observation: In order to swap n elements, simply put n-1 elements to the right (top), then the one element will be left here, which will be automatically the smallest
*/

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    // we will have 2 loops, the first loop will repeat some process, that process will go on n-1 times
    // In every such iteration, we will pick the element at the front and push it to the end of the array (or to the suitable position where it can fit).

    for(int times = 1;time<=n-1;i++){
        // Every time we need to do repeated swapping and we need to push the element in the right direction.
        for(int j=0;j<=n-times-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    // we will repeat the above work n-1 times, and it ends up getting sorted array
}

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << "\n";

    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)