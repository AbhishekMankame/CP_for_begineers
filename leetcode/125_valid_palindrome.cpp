// Leetcode 125 - Valid palindrome
// Difficulty - Easy

/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumberic characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

Example 1: 
Input: s="A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s="race a car"
Output: false
Explanation: "raceacar" is not a palindrome

Example 3:
Input: s=" "
Output: true
Explanation: s is an empty string "" after removing non-alpanumeric characters. Since an empty string reads the same forward and backward, it is a palindrome.

Constraints:
- 1<=s.length()<=2*10^5
- s consists only of printable ASCII characters.

Topics: Two pointers, string
*/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        // Skip non-alphanumeric characters from the left
        if(!std::isalnum(s[left])) {
            left++;
        }

        // Skip non-alphanumeric characters from the right
        else if(!std::isalnum(s[right])){
            right--;
        }

        // If the characters are equal (ignoring the case), move inward
        else if(std::tolower(s[left])==std::tolower(s[right])){
            left++;
            right--;
        }
        else {
            return false; // Not a palindrome
        }
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s)){
        cout << "True" << endl; // Palindrome
    }
    else {
        cout << "False" << endl; // Not a palindrome
    }

    return 0;
}

/*
Explanation:
1. Two Pointers: We use two pointers, left and right, starting at the beginning and end of the string, respectively.
2. Skip Non-alphanumeric characters: The 'std::alnum()' function checks if a character is alphanumeric. We increment the left pointer if the current character is not alphanumeric, and we decrement the right pointer if the character is not alphanumeric.
3. Character Comparison (ignoring case): We use 'std::tolower()' to compare the characters in a case-insensitive manner.
4. Return Result: If we find a mismatch, the function returns 'false'. If the pointers meet or cross, the string is a palindrome, and we return 'true'.

Time Complexity: O(n) where 'n' is the length of the string. We only iterate through the string once.
Space Complexity: O(1) because we only use a few integer variables and no extra space proportional to the input size.

*/