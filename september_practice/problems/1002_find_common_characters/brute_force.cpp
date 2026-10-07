// https://leetcode.com/problems/find-common-characters/description/

/* Leetcode 1002 - Find Common Characters

Approach:
1. Count how many times it appears in each word.
2. Take the minimum count across all words.
3. Add that character to the answer minCount times.

Example:
words = ["bella", "label", "roller"]

For 'l':
    bella -> 2
    label -> 2
    roller -> 2

Minimum = 2
Therefore, "l" is a common character twice.

Time Complexity: O(26 * N * L) -> O(N * L)
Space Complexity: O(L)
    N = number of words
    L = maximum length of a word

*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();

        // The answer must be vector<string> because Leetcode expects characters like ["e", "l", "l"]
        vector<string> ans;

        // Check every lowercase English character.
        for(char ch = 'a'; ch <= 'z'; ch++) {
            // Start with a very large value. We will keep updating it with the minimum frequency of 'ch' found in each word.

            int minCount = INT_MAX;

            // Go through every word.
            for(int i = 0; i < n; i++) {
                // Count how many times 'ch' occurs in the current word.
                int count = 0;

                // Go through every character of the current word.
                for(char c : words[i]) {
                    // If the current character matches the character we are checking, increase count.
                    if(c == ch) count++;
                }
                // We need the minimum frequency across all words because the character must be present in EVERY word.
                minCount = min(minCount, count);
            }

            // Add the character as many times as it appears in every word.
            // string(1, ch) converts a char into a string.
            // ch = 'l'
            // string(1, ch) -> "l"

            for(int i = 0; i < minCount; i++) {
                ans.push_back(string(1, ch));
            }
        }
        return ans;
    }
};

