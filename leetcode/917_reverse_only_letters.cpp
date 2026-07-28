// https://leetcode.com/problems/reverse-only-letters/

// Leetcode 917 - Reverse Only Letters

#include<bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s){
    int left=0,right=s.size()-1;
    while(left<right){
        if(!isalpha(s[left])) left++;
        else if(!isalpha(s[right])) right--;
        else {
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
    return s;
}

/*
Time Complexity:
- You traverse the string using two pointers ('left' and 'right')
- Each pointer moves at most 'n' times (where n=length of string)
- Even through there are nested conditions, each character is processed at most once.
Overall time complexity: O(n)

Space Complexity:
- You are modifying the string in place.
- No extra data structures are used (just a few variables).
Overall space complexity: O(1) (constant space)

Time Complexity: O(n)
Space Complexity: O(1)

*/