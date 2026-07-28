/* Counting zeros in factorial - Efficient Method*/
// This method counts the number of trailing zeros in n! by counting the number of times 5 is a factor in the numeration.
// General formula:
// Trailing Zeros in n! = floor(n/5) + floor(n/25) + floor(n/125) + ...

#include<iostream>
using namespace std;

int countZeros(int n) {
    int count = 0;
    for (int i = 5; i <=n; i = i * 5) {
        count = count + (n / i);
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;

    return 0;
}

// Time Complexity: O(log n) because we are dividing n by powers of 5.
// Space Complexity: O(1) as we are using a constant amount of space.
// Note: This method is efficient and works well for large values of n, as it avoids the need to compute the factorial directly.