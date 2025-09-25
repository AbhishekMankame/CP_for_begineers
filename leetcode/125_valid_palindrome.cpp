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