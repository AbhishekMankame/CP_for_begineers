#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
    int n=nums.size();
    int i=0; // even index pointer (expect positive)
    int j=1; // odd index pointer (expect negative)

    while(i<n && j<n){
        // If nums[i] is positive and nums[j] is negative, move on
        if(nums[i]>0){
            i+=2;
        }

        // If nums[j] is negative and nums[i] is positive, move on
        else if(nums[i]<0){
            j+=2;
        }
        eles {
            // Swap nums[i] (negative in even place) with nums[j] (positive in odd place)
            swap(nums[i],nums[j]);
            i+=2;
            j+=2;
        }
    }
    return nums;
}

// Time Complexity: O(n), because each pointer moves at most n/2 steps.
// Space Complexity: O(1), done in-place