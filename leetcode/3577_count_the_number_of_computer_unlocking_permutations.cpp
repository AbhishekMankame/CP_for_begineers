// Leetcode 3577 - Count the Number of Computer Unlocking Permutations
// Easy
/*
You are given an array complexity of length n.
There are n locked computers in a room with labels from 0 to n-1, each with own unique password. The password of the computer i has a complexity complexity[i].
T
he password for the computer labeled 0 is already decrypted and serves as the root. All other computers must be unlocked using it or another previously unlocked computers, following this information:
- You can decrypt the password for the computer i using the password for computer j, where j is any integer less than i with a lower complexity (i.e. j < i and complexity[j] < complexity[i])
- To decrypt the password for computer i, you must have already unlocked a computer j such that j<i and complexity[j]<complexity[i].

Find the number of permutations of [0,1,2,...(n-1)] that represents a valud order in which the computers can be unlocked, starting from computer 0 as the only initially unlocked one.

Since the answer may be large, return it modulo 10^9+7

Note that the password for the computer with label 0 is decrypted, and not the computer with the first position in the permutation.

Example 1:
Input: complexity = [1,2,3]
Output: 2
Explanation:
The valid permuations are:
- [0,1,2]
    - Unlock computer 0 first with root password.
    - Unlock computer 1 with password of computer 0 since complexity[0]<complexity[1].
    - Unlock computer 2 with password of computer 1 since complexity[2]
- [0,2,1]
    - Unlock computer 0 first with root password.
    - Unlock computer 2 with password of computer 0 since complexity[0] < complexity[2].
    - Unlock computer 1 with password of computer 0 since complexity[0] < complexity[1].

Example 2:
Input: complexity = [3,3,3,4,4,4]
Output: 0
Explanation:
There are no possible permutations which can unlock all computers.

Constraints:
- 2 <= complexity.length <= 10^5
- 1 <= complexity[i] <= 10^9

Topics: Array, Math, Brainteaser, Combinatorics

*/

/*
Intuition and Approach

The first index is the root computer using which we can unlock any computer greater than its complexity.
Let's consider that using this root computer we unlock all computers -- for that to be possible, no computer should have complexity less than or equal to root -> If that's the case then return 0 since not possible to unlock all computers.
If all computers satisfy the condition -> We have (n-1) computers to be rearranged and to get number of permutation of this. The ans for this is simply (n-1)!.
So we get factorial of n-1 and apply mod and return the ans.

Why using Computer 0 to unlock all?
The first step to unlock any first computer j has to be using the root computer and it will be such that
complexity[j]>complexity[root]

Now instead of root computer, even if you want to use computer j to unlock some other computer k, the equation will have to satisfy
computer[k]>computer[j] which in turn should satisfy computer[j]>computer[root].
That's why for any computer to be unlocked, it had to satisfy the minimum most condition that it's complexity should be greater than root.

Complexity:
Time Complexity: O(N)
Aux Space: O(1) --> Overall space complexity: O(N)

*/