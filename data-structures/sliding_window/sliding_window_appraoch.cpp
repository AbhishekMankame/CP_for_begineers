// Sliding window approach - O(n) Time and O(1) Space

/*
- We compute the sum of the first k elements out of n terms using a linear loop and store the sum in variable window sum.
- Then we will traverse linearly over the array till it reaches the end and simultaeously keep track of the maximum sum.
- To get the current sum of a block of k elements just subtract the first element from the previous block and add the last element of the current block.

*/

#include<iostream>
#include<vector>
using namespace std;

int maxSum(vector<int>& arr, int k){
    int n = arr.size();
    // n must be greater
    if(n<=k){
        cout<<"Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    int max_sum=0;
    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }
    // Here we have calculated the sum of first window

    // Compute sums of remaining windows by removing first element of previous window and adding last element of current window
    int window_sum=max_sum;
    for(int i=k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];
        max_sum=max(max_sum,window_sum);
    }
    return max_sum;
}

int main(){
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;
    cout << maxSum(arr, k);
    return 0;
}