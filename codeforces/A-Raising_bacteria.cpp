// Codeforces 579-A Raising Bacteria
// Codeforces Round 320 (Div. 2) [Bayab Thanks-Round]
// time limit per test: 1 second
// memory limit per test: 256 megabytes

/*
You are a lover of bacteria. You want to raise some bacteria in a box.

Initially, the box is empty. Each morning, you can put any number of bacteria into the box. And each night, every bacterium in the box will split into two bacteria. You hope to see exactly x bacteria in the box at some moment.

Wha is the minimum number of bacteria you need to put into the box across those days?

Input: The only line containing one integer x (1 <= x <= 10^9).

Output: The only line containing one integer: the answer

Example:
Input: 5
Output: 2

Problem tags: bitmasks, *1000
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans=0;

    while(n){
        if(n&1) ans++;
        n>>=1;
    }
    cout<<ans<<endl;
    return 0;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)