// Leetcode 374 - Guess Number Higher or Lower
// Easy

/*
We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked (the number I picked stays the same throughout the game).
Every time you guess the wrong. I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API int guess(int num), which returns three possible results:
- -1: Your guess is higher than the number I picked (i.e., num > pick)
- 1: Your guess is lower than the number I picked (i.e., num < pick)
- 0: Your guess is equal to the number I picked (i.e., num == pick)

Return the number that I picked.

Example 1:
Input: n = 10, pick = 6
Output: 6

Example 2:
Input: n = 1, pick = 1
Output: 1

Example 3:
Input: n = 2, pick = 1
Output: 1

Constraints:
1 <= n <= 2^31 - 1
1 <= pick <= n

Topics: Binary Search, Interactive

*/

#include<iostream>
using namespace std;

int guessNumber(int n){
    int left = 0, right = n;
    while(left<right){
        int mid = left + (right - left)/2;
        if(guess(mid)==0) return mid;
        else if(guess(mid)==1) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)