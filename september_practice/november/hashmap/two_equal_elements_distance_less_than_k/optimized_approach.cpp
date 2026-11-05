/* Optimized Approach

For every element, we need to check only the last occurennce or the last index where this element has occured before. We can use a hashmap which will tell us the last occurrence where this element has occurred.

We just need to calculate the distance between current occurrence and last occurrence of current element.

If this distance <=k, we have found a valid pair. We will return true . Otherwise, we will retunr false because we are now sure that we have not found any valid pair of equal elements whose distance between them is <= k.

*/

#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> numIndices;

    for(int i = 0; i < nums.size(); i++) {
        if(numIndices.find(nums[i]) != numIndices.end() && i - numIndices[nums[i]] <= k) {
            return true;
        }
        numIndices[nums[i]] = i;
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 2, 3};
    int k = 2;
    if(containsNearbyDuplicate(nums, k)) {
        cout << "There are two equal numbers within distance " << k << endl;
    }
    else {
        cout << "No two equal numbers found within distance " << k << endl;
    }

    return 0;
}