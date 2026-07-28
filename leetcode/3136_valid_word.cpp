// Leetcode 3136 --> Valid word

/* A word is considered valid if:
- It contains a minimum of 3 characters.
- It contains only digits (0-9), and English letters (uppercase and lowercase).
- It includes at least one vowel
- It contains at least one consonant

You are given a string word.

Return true if word is valid, otherwise return false.

Notes: 'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
- A consonant is an Englisj letter that is not vowel.

Example 1:
Input: word = "234Adas"
Output: true
Explanation:
This word satisfies the conditions.

Example 2:
Input: word = "b3"
Output: false
Explanation:
The length of this word is fewer than 3, and does not have a vowel.

Example 3:
Input: word = "a3$e"
Output: false
Explanation: This word contains a '$' character and does not have a consonant.

Constraints:
- 1 <= word.length <= 20
- word consists of English uppercase and lowercase letters, digits

Topics: string
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(string word){
    string vowel="aeiouAEIOU";
    string consonant="qwrtyopdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNM";
    string valid=vowel+consonant+"1234567890";

    if(word.size()<3) return false;
    bool has_vowel=false;
    bool has_consonant=false;
    for(char c:word){
        if(!alnum(c)) return false;
        if(vowel.find(c)!=string::npos) has_vowel=true;
        else if(consonant.find(c)!=string::npos) has_consonant=true;
    }

    return has_vowel&&has_consonant;
}