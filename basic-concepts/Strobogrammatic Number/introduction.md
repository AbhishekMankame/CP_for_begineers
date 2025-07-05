# 🔄Storbogrammatic Number - What is it?

A strobogrammatic number is a number that looks the same way when rotated 180 degrees (upside down).
<br>Think of writing a number on paper, rotating the paper 180 degrees, and the number still looks the same.

## ✅Valid Digits

Only certain digits remain valid (or transform into another valid digit) when rotated 180 degree:
| Original Digit | Rotated Digit |
| -------------- | ------------- |
| 0 | 0 |
| 1 | 1 |
| 6 | 9 |
| 8 | 8 |
| 9 | 6 |

All the other digits (like 2, 3, 4, 5 and 7) break the strobogrammatic property, because they don't look like valid digits when rotated.

## 🧠Examples

| Number | 180 degree Rotated | Strobogrammatic?         |
| ------ | ------------------ | ------------------------ |
| 69     | 96                 | ✅                       |
| 88     | 88                 | ✅ Yes                   |
| 962    | 269                | ❌ No (2 not valid)      |
| 818    | 818                | ✅ Yes                   |
| 123    | ???                | ❌ No (2, 3 are invalid) |

## 🔄How to Check if a Number is Strobogrammatic?

You check from both the ends inward:

- For each pair of characters (start and end), confirm that:
  - One is the valid rotated form of the other.
- Use a mapping:
<pre> unordred_map< char, char > strobomap = {
    {'0','0'}, {'1','1'}, {'6','9'}, {'8','8'}, {'9','6'}
}; </pre>

## 🔍Real Use Case

In coding interviews, you might be asked:

- Count all strobogrammatic numbers of lenght `n`
- Generate all such numbers
- Check if a given number is strobogrammatic
