// Leetcode 1207 - Unique Number of Occurrences
// Easy

/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrnces.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

Constraints:
1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000

*/

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr){
    unordered_map<int,int> freq;
    for(int num:arr){
        freq[num]++;
    }

    unordered_set<int> seen;
    for(auto& [num,count]:freq){
        if(seen.count(count)){
            return false; // duplicate frequency
        }
        seen.insert(count);
    }
    return true;
}