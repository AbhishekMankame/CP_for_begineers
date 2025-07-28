// Number of digits in the given number n
#include <iostream>
#include <bits/stdc++.h> // log10 is in the library <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digits = log10(n) + 1;
    cout << digits << endl;
    return 0;
}

// Time Complexity: O(1) --> The time complexity is O(1) because the logarithmic operation log10(n) is computed in constant time, regardless of the size of n.
// Space Complexity: O(1) --> The space complexity is O(1) as we are using a fixed amount of space for the variable 'digits' and do not use any additional data structures that grow with input size.
// Note: This implementation efficiently calculates the number of digits in a given integer n using the logarithmic function. It is suitable for all positive integers, including very large numbers as long as they fit within the limits of the data type used (int in this case).
// How this code works: Here, we use the logarithmic function log10 to determine the number of digits in the integer n. The formula log10(n) gives us the exponent to which 10 must be raised to obtain n, and adding 1 accounts for the fact that the count starts from 1. This approach is efficient and avoids the need for iterative or recursive methods to count digits.