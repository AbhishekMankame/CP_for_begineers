/*Checking whether the given number is power of 2 or not */

#include<iostream>
using namespace std;

bool isPow2(int n) {
    if(n == 0) return false;
    return ((n & (n - 1)) == 0);
}

int main() {
    int n;
    cin >> n;
    cout << isPow2(n);
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
// Explanation: The expression (n & (n - 1)) checks if n is a power of 2. If n is a power of 2, it will have exactly one bit set in its binary representation, and subtracting 1 from it will turn that bit to 0 and all bits to the right of it to 1. Thus, the bitwise AND operation will yield 0.
// This approach is efficient and works in constant time, making it suitable for large inputs.
// Note: The code uses bitwise operations, which are generally faster than arithmetic operations, making this approach efficient for checking powers of 2.