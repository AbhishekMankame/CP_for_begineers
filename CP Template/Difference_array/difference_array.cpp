#include<bits/stdc++.h>
using namespace std;

int main() {
    // Example array
    vector<int> a={2,3,7,1,4};
    int n=a.size();

    // Step 1: Build difference array
    vector<int> d(n);
    d[0]=a[0];
    for(int i=1;i<n;i++){
        d[i]=a[i]-a[i-1];
    }

    // Step 2: Perform range updates
    // Example: Add 5 to range [1,3] (0-indexed)
    int l=1,r=3,val=5;
    d[l]+=val;  // Add to start of range
    if(r+1<n){
        d[r+1] -= val; // Subtract after end of range
    }
}