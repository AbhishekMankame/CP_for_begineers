// Count the  subsequence whose sum is k
// Example: Input: arr = [1,2,1], sum = 2
// Output: 2

#include<bits/stdc++.h>
using namespace std;

int printS(int ind, int s, int sum, int arr[], int n){
    if(ind==n){
        // condition satisfied
        if(s==sum){
            return 1;
        } 
        // condition not satisified
        else return 0; // we can return this false in 'else' statement also
    }
    s += arr[ind];
    int l = printS(ind+1,s,sum,arr,n);
    s -= arr[ind];
    // Not pick
    int r = printS(ind+1,s,sum,arr,n);

    return l+r;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    printS(0, 0, sum, arr, n);
    return 0;
}