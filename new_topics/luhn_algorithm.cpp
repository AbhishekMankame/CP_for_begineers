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

*/