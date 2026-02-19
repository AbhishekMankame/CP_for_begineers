// Subarray Sums I
// https://cses.fi/problemset/task/1660

/*
Given an array of 'n' positive integers, your task is to count the number of subarrays having sum x.

The next line has 'n' integers a1,a2,a3...an: the contests of the array.

Output:
Print one integer: the required number of subarrays.

Constraints
- 1 <= n <= 2*10^5
- 1 <= x, ai <= 10^8

Example
Input:
5 7
2 4 1 2 7

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin>>n>>x;

    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long sum=0;
    long long count=0;
    int left=0;

    for(int right=0;right<n;right++){
        sum+=arr[right];
        while(sum>x){
            sum-=arr[left];
            left++;
        }
        if(sum==x) count++;
    }
    cout<<count<<endl;
    return 0;
}

// TC: O(n)
// SC: O(n)