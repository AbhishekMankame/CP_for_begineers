// Leetcode 392 - Is Subsequence --> Follow up question

/*Suppose there are lots of incoming `s`, say `s1, s2, .. sk` where `k>=10^9`, and you want to check one by one to see if `t` has its subsequence. In this scenario, how would you change the code?*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm> // for upper_bound

using namespace std;

class Solution {
    // For each character, store all indices it appears at in 't'
    vector<vector<int>> charIndices;

    public:
    Solution() {
        charIndices.resize(26); // 26 lowercase English letters
    }

    // Preprocess the string t: store positions of each character
    void preprocess(const string &t){
        for(int i=0;i<(int)t.size();i++){
            charIndices[t[i]-'a'].push_back(i);
        }
    }

    // Check if s is a subsequence of t using binary search on charIndices
    bool isSubsequence(const &s){
        int prevIndex = -1; // the position in t we matched last time

        for(char c:s) {
            const vector<int> &position = charIndices[c-'a'];

            // use binary search to find the smallest position > prevIndex
            // upper_bound returns an iterator to the first element > prevIndex

            if(it==position.end()){
                // no valid position found - subsequence condition breaks here
                return false;
            }

            // Move prevIndex to this position for next search
            prevIndex = *it;
        }
        return true; // all characters matched in order
    }
}