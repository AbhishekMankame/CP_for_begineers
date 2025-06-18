#include <iostream>
using namespace std;

int binaryToDecimal(string binary)
{
    int res = 0;
    for (char bit : binary)
    {
        res = res * 2 + (bit - '0');
    }

    return res;
}

int main()
{
    string binary;
    cin >> binary;

    cout << binaryToDecimal(binary);
    return 0;
}

// TC: O(n) --> The time complexity is O(n) because we iterate through each character of the binary string exactly once, where n is the length of the binary string.
// SC: O(1) --> The space complexity is O(1) because we are using a constant amount of space for the variables res, which stores the result, and bit, which is used to iterate through the characthers of the binary string. The input binary string itself does not count towards space compelxity as it is provided by the user and does not grow with the algorithm's execution.