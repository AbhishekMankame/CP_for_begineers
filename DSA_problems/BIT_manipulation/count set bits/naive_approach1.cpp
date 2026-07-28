/*Count set bits - Naive Approach*/

#include<iostream>
using namespace std;

int countBits(int n) {
    int res = 0;
    while(n>0){
        if(n%2==1) res++;
        n = n/2;
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    cout << countBits(n) << endl;

    return 0;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)
// Explanation: The function countBits takes an integer n as input and counts the number of set bits (1s) in its binary representation. It does this by repeatedly checking the least significant bit (LSB) using the modulo operator and then right-shifting the number until it becomes zero. The result is returned as the count of set bits.