// Leetcode 1832 - Check if the Sentence is Pangram

#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
    int n = sentence.size();

    // We know that a sentence to be a pangram it should contain all the 26 characters of alphabet.
    // If the lenght of sentence is less than 26, then we can straightly tell that the given sentence is not pangram
    if(n < 26) return false;

    set<char> st;
    for(char i : sentence) {
        st.insert(i);
    }
    if(st.size() == 26) return true;
    else return true;
}

// TC: O(n)
// SC: O(1) --> Note: Here eventhough we are using `set` datastructure, but maximum size of set can only be 26, therefore `space complexity` will be O(1)