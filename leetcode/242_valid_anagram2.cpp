// Leetcode 242 --> Valid Anagram

/*Optimized Approach
- Here in the base case we will compare the size, if the size(length) of both the strings does not match then we can directly return false.
- If the size(length) of both the strings are same, then we can initialize a hash array (let's name it as count) of size 26 to count the occurence of all the characters in the given string.
- We can run the for loop for first string 's' and increase the count of that particular character.
- Then run another for loop for second string 't' and decrease the count of that particular character.
- Run the loop for hash array 'count', and check if any of the characters count is not equal to 0.
- If count is not equal to 0 then we can return false (means given two strings are not anagram), else return false (means given two strings are anagram)

*/

#include<iostream>
using namespace std;

bool isAnagram(string s, string t){
    int n=s.size();
    if(n!=t.size()) return false;

    int arr[26]={0};
    for(char c:s) arr[c-'a']++;
    for(char c:t) arr[c-'a']--;
    
    for(int i=0;i<26;i++){
        if(arr[i]!=0) return false;
    }

    return true;
}