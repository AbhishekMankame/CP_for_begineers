// Two pointers optimized approach
/*
We take two pointers, one representing the first element and other representing the last element of the array, and then we add the values kept at both the pointers.
If their sum is smaller than X then we shift the left pointer to right or if their sum is greater than X then then we shift right pointer to left, in order to get closer to the sum.
We keep moving the pointers until we get the sum as X.
*/

#include<bits/stdc++.h>
using namespace std;

int isPairSum(int A[], int N, int X){
    // represents first pointer
    int i=0;

    // represents second pointer
    int j=N-1;

    while(i<j){
        // If we find a pair
        if(A[i]+A[j]==X) return 1;

        // If sum of elements at current pointers is less, we move towards higher value by doing i++
        else if (A[i]+A[j]<X) i++;

        // If sum of elements at current pointers is more, we move towards lower values by doing j--
        eles j--;
    }
    return 0;
}