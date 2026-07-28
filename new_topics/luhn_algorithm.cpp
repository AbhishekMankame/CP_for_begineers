/*
Luhn Algorithm:
The Luhn algorithm (also called the modulus 10 or mod 10 algorithm) is a simple checksum algorithm used to validate identification numbers such as:
- Credit card numbers
- IMEI numbers (mobile devices)
- Some national identification numbers

It detects most accidental errors, such as a mistyped digit or two adjacent digits being transposed.

### Steps of the Luhn Algorithm:
Given a number:
1. Starting from the rightmost digit, move left.
2. Double every second digit.
3. If doubling produces a number greater than 9, subtract 9 from it (or equivalently, add its digits).
4. Sum all the digits.
5. If the total is divisible by 10, the number is valid according to the Luhn Algorithm.

| Digit | Action          | Result |
| ----: | --------------- | -----: |
|     6 | Keep            |      6 |
|     1 | Double          |      2 |
|     7 | Keep            |      7 |
|     8 | Double → 16 → 7 |      7 |
|     9 | Keep            |      9 |
|     3 | Double          |      6 |
|     7 | Keep            |      7 |
|     2 | Double          |      4 |
|     9 | Keep            |      9 |
|     9 | Double → 18 → 9 |      9 |
|     4 | Keep            |      4 |

Sum: 4 + 9 + 9 + 4 + 7 + 6 + 9 + 7 + 7 + 2 + 6 = 70
Since 70 mod 10 = 0, the number is valid.

### Pseudocode:
sum = 0
double = false

for each digit from right to left:
    if double:
        digit = digit*2
        if digit > 9:
            digit -= 9
        sum += digit
        double != double

return (sum%10==0)

Time Complexity:
Time: O(n)
Space: O(1)

Limitations: The Luhn algorithm is not a security mechanism. It only checks whether a number is structurally valid. A number that passes the Luhn check may still be fake, expired, or otherwise invalid.
It is designed to catch data-entry errors, not to prevent fraud.

*/

// Method 1: Input as a string (Recommended)

#include<iostream>
#include<string>
using namespace std;

bool isValidLuhn(string number){
    int sum = 0;
    bool shouldDouble = false;

    // Traverse from right to left
    for(int i = number.length()-1;i>=0;i--){
        int digit = number[i] - '0';
        if(shouldDouble){
            digit*=2;
            if(digit>9) digit -= 9;
        }
        sum+=digit;
        shouldDouble = !shouldDouble;
    }
    return (sum%10==0);
}

int main() {
    string number;
    cin >> number;

    if(isValidLuhn(number)){
        cout << "Valid";
    }
    else cout << "Invalid";

    return 0;
}

// Method 2: Using an integer (only if the number fits in long long)

bool isValidLuhn2(long long number){
    int sum = 0;
    bool shouldDouble = false;

    while(number > 0) {
        int digit = number % 10;
        number /= 10;

        if(shouldDouble){
            digit *= 2;
            if(digit > 9) digit -= 9;
        }
        sum += digit;
        shouldDouble = !shouldDouble;
    }
    return sum%10 == 0;
}

/*
Why use 'string' instead of 'long long'?
Using a 'string' is preferred because:
- Credit card numbers are typically 16 digits, and some IDs (e.g., IMEIs) can be 15-19 digits.
- Leading zeros, if present, are preserved.
- You avoid integer overflow for longer numbers.

*/