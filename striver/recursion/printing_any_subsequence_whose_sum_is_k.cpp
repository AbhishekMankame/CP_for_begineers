// Printing any subsequence whose sum is k
// Example: Input: arr = [1,2,1], sum = 2
// Output: [1,1]

#include<bits/stdc++.h>
using namespace std;

bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(ind==n){
        // condition satisfied
        if(s==sum){
            for(auto it:ds) cout<<it << " ";
            cout<<endl;
            return true;
        } 
        // condition not satisified
        return false; // we can return this false in 'else' statement also
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    if(printS(ind+1,ds,s,sum,arr,n) == true) {
        return true;
    }
    s -= arr[ind];
    ds.pop_back();
    // Not pick
    if(printS(ind+1,ds,s,sum,arr,n) == true) return true;

    return false;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3, sum = 2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);
    return 0;
}