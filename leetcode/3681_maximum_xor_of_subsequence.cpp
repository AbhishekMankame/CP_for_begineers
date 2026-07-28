// Leetcode 3681 - Maximum XOR of Subsequence
// Hard

/*
You are given an integer array 'nums' of length 'n' where each element is a non-negative integer.

Select two subsequence of 'nums' (they may be empty and are allowed to overlap), each preserving the original order of elements, and let:
- X be the bitwise XOR of all elements in the first subsequence.
- Y be the bitwise XOR of all elements in the second subsequence.

Return the maximum possible value of 'X XOR Y'.

Note: The XOR of an empty subsequence is 0.

Example 1:
Input: nums = [1,2,3]
Output: 3
Explanation:
Choose subsequences:
- First subsequence '[2]', whose XOR is 2.
- Second subequence '[2,3]', whose XOR is 1.
Then, XOR of both subsequence = 2 XOR 1 = 3.
This is the maximum XOR value achievable fromany two subsequences.

Example 2:
Input: nums = [5,2]
Output: 7
Explanation:
Choose subsequences:
- First subsequence '[5]', whose XOR is 5.
- Second subsequence '[2]', whose XOR is 2.
Then, XOR of both subsequences = 5 XOR 2 = 7.
This is the maximum XOR achievable from any two subsequences.

Constraints:
- 2 <= nums.length <= 10^5
- 0 <= nums[i] <= 10^9

Topics: Array, Math, Greedy, Bit Manipulation

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxXorSubsequences(vector<int>& nums){
    vector<int> arr;
    for(int i:nums){
        for(int j:arr){
            i=min(i,i^j);
        }
        if(i>0) arr.push_back(i);
    }

    int maxi=0;
    for(int i:arr){
        maxi=max(maxi,max^i);
    }

    return maxi;
}

/*
Explanation (Intution):
We keep a vector 'arr' which stores the XOR basis elements. For each number 'i' in the input nums, we try to reduce it as much as possible by XORing it wieth elements already in 'arr'.
This ensures that every new element we add is linearly independent (brings a new unique contribution to possible XOR values). If, after this reduction, the number 'i' still greater than zero, we add it to 'arr'.

After building this basis, we try to find the maximum 'XOR' we can get. Starting with 'maxi=0', we check each element in the basis 'arr' and greedily update 'maxi' as 'max(maxi,maxi^i). This way, we always pick the best combination to maximize the 'XOR' value.
Finally, the function returns this 'maximum XOR'.

Time Complexity: O(N*M + M)
Space Complexity: O(M)
*/