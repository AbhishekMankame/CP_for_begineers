// Leetcode 2330 - Successful Pairs of Spells and Potions
// Difficulty: Medium

/*
You are givern two positive integer arrays 'spells' and 'potions', of length 'n' and 'm' respectively, where 'spells[i]' represents the strength of the ith spell and 'positions[j]' represents the strength of the jth potion.

You are also givern an integer 'success'. A spell and potion pair is considered successful if the product of their strengths is at least success.

Return an integer array pairs of length n where pairs[i] is the number of potions that will form a successful pair with the ith spell.

Example 1:
Input: spells = [5,1,3], potions = [1,2,3,4,5], sucess = 7
Output: [4,0,3]
Explanation:
- 0th spell: 5 * [1,2,3,4,5] = [5,10,15,20,25]. 4 pairs are successful.
- 1st spell: 1 * [1,2,3,4,5] = [1,2,3,4,5]. 0 pairs are successful.
- 2nd spell: 3 * [1,2,3,4,5] = [3,6,9,12,15]. 3 pairs are succesul.
Thus, [4,0,3] is returned.

Input: spells = [3,1,2], potions = [8,5,8], success = 16
Output: [2,0,2]
Explanation:
- 0th spell: 3 * [8,5,8] = [24,15,24]. 2 pairs are successful.
- 1st spell: 1 * [8,5,8] = [8,5,8]. 0 pairs are successful. 
- 2nd spell: 2 * [8,5,8] = [16,10,16]. 2 pairs are successful. 
Thus, [2,0,2] is returned.

Constraints:
- n == spells.length
- m == potions.length
- 1 <= n, m <= 10^5
- 1 <= spells[i], potions[j] <= 10^5
- 1 <= success <= 10^10

Topics: Array, Two Pointers, Binary Search, Sorting
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    vector<int> ans;

    // Sort the potions array to perform binary search later
    sort(potions.begin(), potions.end());

    // Iterate over each spell
    for(int spell:spells){
        // Calculate the minimum required potion value that can create a successful pair
        long long target = (success+spell-1)/spell; // This is equivalent to ceiling(success/spell)

        // Binary search to find the first valid potion
        auto it = lower_bound(potions.begin(), potions.end(),target);
        int index = it - potions.begin();

        // The number of valid potions is the remaining ones from the index onward
        ans.push_back(potions.size()-index);
    }
    return ans;
}

/* Time Complexity
- Sorting potions: O(m log m)
- Binary Search for each spell: O(n log m)
Thus overall time complexity is O(m log m + n log m)
Where n is the number of spells, m is the number of potions

Space Complexity:
Auxiliary Space Complexity (excluding input and output): O(1)
Total Space Complexity (including output): O(n)

*/