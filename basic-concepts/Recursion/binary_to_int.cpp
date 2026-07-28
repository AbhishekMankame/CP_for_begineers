#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int res = 0, base = 1;
    while (n > 0)
    {
        int lastD = n % 10;
        res = res + (lastD * base);
        base = base * 2;
        n = n / 10;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n);

    return 0;
}

// TC: O(log n) --> The time complexity is O(log n) because we are processing each digit of the binary number, which has a logarithmic relationship with the value of n.
// SC: O(1) --> The space complexity is O(1) because we are using a constant amount of space for the variables res and base, representation of the result and base value, respectively. The input n is not counted in space complexity as it is provided by the user and does not grow with the algorithm's execution.
// Note: The function converts a binary number represented as an integer to its decimal equivalent. It processes each digit of the binary number from least significant to most significant, multiplying each digit by the corresponding power of 2 and accumulating the result.