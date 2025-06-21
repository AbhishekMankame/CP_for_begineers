## Strobogrammatic Number
A strobogrammativ number is a number that looks the same when rotated 180 degrees (upside down).
<br>

- 69 beocmes 96
- 88 stays 88
- 818 beicmes 818

### 🔍Valid Digit Rotations
Only certain digits are valid when rotated 180 degree:
| Digit | Rotates To | Valid? |
| ----- | ---------- | ------ |
| 0 | 0 | ✅ |
| 1 | 1 | ✅ |
| 2 | x (invalid) | ❌ |
| 3 | x (invalid) | ❌ |
| 4 | x (invalid) | ❌ |
| 5 | x (invalid) | ❌ |
| 6 | 9 | ✅ |
| 7 | x (invalid) | ❌ |
| 8 | 8 | ✅ |
| 9 | 6 | ✅ |

So only 0, 1, 6, 8, 9 are used in strobogrammatic numbers.

### ✅ Examples
✔ Vaid Strobogrammatic numbers:
- 0, 1, 8
- 69, 88, 96
- 101, 609, 818, 986

❌ Invalid Ones:
- 23, 747, 123, 345
- They contain digits like 2, 3, 4, 5, 7

### 💡Properties:
1. Symmetry: Strobogrammatic numbers are symmetric across a 180 degree rotation.
2. Middle Digit: For odd-length numbers, the center must be one of 0, 1, or 8.
3. No leading zeros (for mulit-digit numbers): 010 is invalid unless n = 3 and zero is explicitly allowed.