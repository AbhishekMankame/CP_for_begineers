/*Count set bits - Naive Approach*/

#include<iostream>
using namespace std;

int countBits(int n) {
    int res = 0;
    while(n > 0) {
        res = res + (n & 1); // Check if the least significant bit is set
        n = n / 2; // Right shift the number to process the next bit
        // Alternatively, we can use n >>= 1; to right shift
    }
    return res; // Return the total count of set bits
}

int main() {
    int n;
    cin >> n;
    cout << countBits(n) << endl;

    return 0;
}