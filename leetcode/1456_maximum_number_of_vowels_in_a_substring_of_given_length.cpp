// Leetcode 1456 - Maximum Number of Vowels in a Substring of Given Length
// Medium
/*
Given a string 's' and an integer 'k', return the maximum number of vowel letters in any substring of 's' with length 'k'.
Vowel letters in English are 'a','e','i','o', and 'u'.

Example 1:
Input: s="abciiidef", k=3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

Example 2:
Input: s = "aeiou"
Output: 2
Explanation" Any substring of length 2 contains 2 vowels.

Example 3:
Input: s = "leetcode", k=3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.

Constraints:
- 1<=s.length<=10^5
- 's' consists of lowercase English letters.
- 1<=k<=s.length

Topics: String, Sliding Window
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int maxVowels(string s, int k){
    int count=0,maxCount=0;
    for(int i=0;i<k;i++){
        if(isVowel(s[i])) count++;
    }
    maxCount=count;
    for(int i=k;i<s.length();i++){
        if(isVowel(s[i])) count++;
        if(isVowel(s[i-k])) count--;
        maxCount=max(maxCount,count);
    }

    return maxCount;
}