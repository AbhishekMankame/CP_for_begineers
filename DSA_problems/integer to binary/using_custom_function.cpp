#include<iostream>
#include<string>
using namespace std;

string toBinary(int n) {
    if(n == 0) return "0";
    string result = "";
    while(n > 0) {
        result = to_string(n%2) + result;
        n = n/2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << toBinary(n) << endl;
    return 0;
}

// Time Complexity: O(log n) // The time complexity is O(log n) because the number of bits in the binary representation of n is proportional to log(n)
// Space Complexity: O(log n) // The space complexity is O(log n) because the string stores the binary representation, which can have at most log(n) bits.
// Explanation: The code converts an integer to its binary representation by repeatedly dividing the number by 2 and prepending the remainder (0 or 1) to the result string. This continues until the number becomes 0.