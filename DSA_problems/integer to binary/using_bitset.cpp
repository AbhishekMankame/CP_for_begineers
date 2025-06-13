#include<iostream>
#include<bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<32> binary(n);
    cout << binary << endl;

    return 0;
}

// Time Complexity: O(1) // The time complexity is O(1) because the bitset constructor initializes the bitset in constant time for a fixed size (32 bits in this case).
// Space Complexity: O(1) // The space complexity is O(1) because the bitset size is fixed at 32 bits, regardless of the input value.