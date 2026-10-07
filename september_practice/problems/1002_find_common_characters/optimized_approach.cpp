// Leetcode 1002 - Find Common Characters - Optimized approach

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        // Store the minimum frequency of each character across all words.
        vector<int> common(26, INT_MAX);

        // Process every word.
        for(string& word: words) {
            // Frequency of characters in the current word.
            vector<int> freq(26, 0);

            // Count characters in the current word.
            for(char ch : word) {
                freq[ch - 'a']++;
            }

            // Keep the minimum frequency for each character.
            for(int i = 0; i < 26; i++) {
                common[i] = min(freq[i], common[i]);
            }
        }

        vector<string> ans;

        // Add each common character according to its minimum frequency.
        for(int i = 0; i < 26; i++) {
            while(common[i] > 0) {
                ans.push_back(string(1, 'a' + i));
                common[i]--;
            }
        }
        return ans;
    }
};


/*
Approach:
1. Create a frequency array of size 26 to store the minimum frequency of each character across all words.

2. For each word:
    - Count the frequency all characters using another frequency array.
    - Update the common frequency array by taking the minimum frequency for each character.

3. After processing all words, the common array contains the number of times each character appears in Every word.

4. Add each character to the answer according to its minimum frequency.

Example:
words = ["bella", "label", "roller"]

For 'e':
    bella -> 1
    label -> 1
    roller -> 1
    minimum = 1

For 'l':
    bella -> 2
    label -> 2
    roller -> 2

Therefore, the answer is:
["e", "l", "l"]

Time Complexity: O(N * L)
Space Complexity: O(1) auxiliary space
    N = number of words
    L = length of the words
    We use arrays of fixed size 26.

*/