// https://leetcode.com/problems/subsets-ii/description/

// Leetcode 90 - subsets II

/*
Key Idea:
1. Sort the array first so duplicates come together.
2. Generate all subsets using bit masks from 0 to 2^n - 1
3. Store subsets in a set to automatically remove duplicates.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        int n = nums.size();

        // Sort to group duplicate elements together
        sort(nums.begin(),nums.end());

        // Total number of possible masks = 2^n
        int total = 1<<n;

        // Use a set to automatically remove duplicate subsets
        set<vector<int>> uniqueSubsets;

        for(int mask=0;mask<total;mask++){
            vector<int> subset;

            // Check each bit position
            for(int j=0;j<n;j++){

                /*
                If j-th bit is set in mask,
                include nums[j] in the current subset
                */

                if(mask&(1<<j)) {
                    subset.push_back(nums[j]);
                }
            }
            // Insert subset into set (duplicates automatically ignored)
            uniqueSubsets.insert(subset);

        }
        // Convert set to vector
        vector<vector<int>> result(uniqueSubsets.begin(),uniqueSubsets.end());

        return result;

    }
};

/*
Example
Input: nums = [1,2,2]
Sorted: [1,2,2]

Generated masks:
Mask Binary Subset
0 000 []
1 001 [1]
2 010 [2]
3 011 [1,2]
4 100 [2]
5 101 [1,2]
6 110 [2,2]
7 111 [1,2,2]

Duplicates appear: [2], [1,2]
The set removes duplicates automatically.

Final result:
[]
[1]
[2]
[1,2]
[2,2]
[1,2,2]

Time Complexity:
Let 'n' be the number of elements.

Subset generation: 2^n masks

Each mask checks 'n' bits:
O(n*2^n)

Set insertion cost
Each insertion costs roughly:
O(log(2^n)) = O(n)

So total: O(n*2^n)

Space Complexity: O(n * 2^n)
because we store all subsets.

Important Note (Interview Insight):
While bitmasking works, the most optimal and commonly expected solution for Subsets II is backtracking with duplicate skipping,
because it avoids generating duplicates in the first place.

*/