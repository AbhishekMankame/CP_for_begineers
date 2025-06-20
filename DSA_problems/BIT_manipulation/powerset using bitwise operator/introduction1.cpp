/*
This is a simple C++ program to generate the power set of a given set using bitwise operators.
The power set is the set of all subsets of a given set, including the empty set and the set itself.
*/

#include<iostream>
#include<string>
using namespace std;

void powerSet(string s) {
    int n = s.length();
    int psize = (1 << n); // 2^n subsets - This calculates the size of the power set using bitwise left shift operator. Here, 1 << n is equivalent to 2^n.
    for(int i = 0; i < psize; i++) {
        for(int j = 0; j < n; j++) {
            // Check if jth bit in i is set
            if((i & (1 << j))!=0) {
                cout << s[j]; // If the jth bit is set, include the jth character of the string in the current subset
            }
        }
        cout << endl; // Print the current subset
    }
}

int main() {
    string s;
    cin >> s; // Input the string for which we want to generate the power set
    powerSet(s); // Call the function to generate and print the power set
    return 0; // Return 0 to indicate successful execution
}

// Time Complexity: O(n * 2^n) --> The time complexity is O(n * 2^n) because there are 2^n subsets, and for each subset, we may need to iterate through n characters to check which characters are included in the subset.
// Space Complexity: O(1) --> The space complexity is O(1) because we are not using any additional data structures that grow with the input size; we are only using a constant amount of space for variables.
// Note: The power set includes the empty set and the set itself, so the output will contain 2^n subsets.