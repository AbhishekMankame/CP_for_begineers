// Binary Search O((n log n)) - without modifying array

// Idea: Use the Pigeonhole principle and binary search on value range [1,n]

/*Algorithm:
- Count how many numbers <= mid
- If count > mid, the duplicate is in left half.
- Else, right half

*/

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums){
    int low = 1, high = nums.size()-1;
    while(low<high){
        int mid = (low+high)/2;
        int count =0;
        for(int num:nums){
            if(num<=mid) count++;
        }
        if(count>mid){
            high=mid;
        }
        else low=mid+1;
    }
    return low;
}

// Time Complexity: O(n log n)
// Space Complexity: O(1)
// Doesn't modify array and uses constant space