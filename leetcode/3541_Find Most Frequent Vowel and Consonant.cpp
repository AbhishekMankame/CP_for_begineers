// Leetcode 3541 - Find Most Frequent Vowel and Consonant

/*You are given a string s consisting of lowercase English letters (`a` to `z`).

Your task is to:
- Find the vowel (one of `a`, `e`, `i`, `o`, `u`) with the maximum frequency.
- Find the consonant (all other letters excluding vowels) with the maximum frequency.

Return the sum of the two frequencies.

Note: If mutliple vowels or consonants have the same maximum frequency, you may choose any one of them. If there are no vowels or no consonants in the string, consider their frequency as 0.

The frequency of a letter `x` is the number of times it occurs in the string.

Example 1:
Input s = "successes"
Output: 6
Explanation:
- The vowels are: `u` (frequency 1), `e` (frequency 2). The maximum frequency is 2.
- The consonants are: `s` (frequency 4), `c` (frequency 2). The maximum frequency is 4.
- The output is `2 + 4 = 6`

Output: 3
Explanation:
- The vowels are: 'a' (frequency 3), 'e' ( frequency 2), 'i' (frequency 2). The maximum frequency is 3.
- There are no consonants in s. Hence, maximum consonant frequency = 0.
- The output is 3 + 0 = 3.

Constraints:
- 1 <= s.length <= 100
- s consists of lowercase Enlish letters only

Topics: Hash Table, String, Counting

*/

#include<iostream>
#include<vector>
using namespace std;

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxFreqSum(string s){
    vector<int> freq(26,0);
    for(char c:s){
        freq[c-'a']++;
    }
    int maxVowel=0, maxConsonant=0;
    for(int i=0;i<s.length();i++){
        char ch = 'a' + i;
        int count = freq[i];

        if(isVowel(ch)){
            maxVowel = max(count, maxVowel);
        }
        else maxConsonant = max(count, maxConsonant);

        return maxConsonant + maxVowel;
    }
}