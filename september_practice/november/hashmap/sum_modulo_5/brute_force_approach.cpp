// Given an array nums of size N, find the total number of pairs (i, j) where i < j, such that (nums[i] + nums[j])%5 == 0, (nums[i] >= 0)

#include<bits/stdc++.h>
using namespace std;

int kuchBhiBhai(vector<int> &arr) {
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((arr[i] + arr[j]) % 5 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {2, 2, 5, 5, 3, 3};
    int ans = kuchBhiBhai(arr);

    cout << ans << endl;
}

// TC: O(N^2)
// SC: O(1)