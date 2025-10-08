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
*/