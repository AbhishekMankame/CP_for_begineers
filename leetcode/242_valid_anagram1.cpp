// Leetcode 242 --> Valid Anagram
/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Note: Anagram is a word or phrase formed by rearranging the letters of a different word or a phrase, using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Constraints:
- 1 <= s.length, t.length <= 5*10^4
- s and t consist of lowercase English letters.

Topics: Hash Table, String, Sorting
*/

/* Let's solve it using sorting approach
 - Here we will sort both the given input strings s and t.
 - Once the strings are sort, we will just compare both the strings.
 - If both matches, then we return true, otherwise we will return false.
 */

 #include<iostream>
 #include<algoritm>
 using namespace std;

 bool isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t;
 }

 // Time complexity: O(n logn) --> as we are using inbuilt sort to sort the given both strings
 // Space complexxity: O(1) --> as we are not using any extra space