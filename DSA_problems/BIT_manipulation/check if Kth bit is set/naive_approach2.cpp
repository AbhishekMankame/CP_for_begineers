#include<iostream>
using namespace std;

void isSet(int n, int k) {
    for(int i = 0; i < (k - 1); i++) {
        n = n / 2; // Right shift n by 1 for k - 1 times
    }
    if((n & 1) != 0) {
        cout << "Yes" << endl; // If the Kth bit is set, print "Yes"
    }
    else {
        cout << "No" << endl; // If the Kth bit is not set, print "No"
    }
}

int main() {
    int n, k;
    cin >> n >> k; // Input the number and the bit position
    isSet(n, k); // Call the function to check if the Kth bit is set
    return 0;
}

// Time Complexity: O(K) where K is the position of the bit we are checking.
// Space Complexity: O(1) as we are using a constant amount of space.