// Two Pointers technique
/*It is an easy and effective technique that is typically used for searchin pairs in a sorted array.
Given a sorted array A(sorted in ascending order), having N integers, find if there exists any pairs of elements (A[i], A[j]) such that their sum is equal to X.

Illustration:
A[] = {10,20,35,50,75,80}
X=70
i=0
j=5

A[i] + A[j] = 10 + 80 = 90
Since A[i] + A[j] > X, j--
i=0
j=4

A[i] + A[j] = 10 +75 = 85
Since A[i] + A[j] > X, j--
i=0
j=3

A[i] + A[j] = 10 + 50 = 60
i=1
j=3

A[i] + A[j] = 20 + 50 = 70
thus this signifies that pair is found.
*/

// Naive Approach

#include<bits/stdc++.h>
using namespace std;

bool isPairSum(int A[], int N, int X){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            // as equal i and j means same element
            if(i==j) continue;

            // pair exists
            if(A[i]+A[j]==X) return true;

            // as the array is sorted
            if(A[i]+A[j]>X) break;
        }
    }

    // No pair found with given sum.
    return false;
}

// Driver code
int main() {
    int arr[] = {2,3,5,8,9,10,11};
    int val=17;
    int arrSize=*(arr+1)-arr;
    sort(arr,arr+arrSize); // Sort the array
    // Function call
    cout<<isPairSum(arr,arrSize,val);

    return 0;
}