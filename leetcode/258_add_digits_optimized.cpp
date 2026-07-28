// Leetcode 258 - Add digits
// Easy

/* To solve this problem in O(1) time we can use digit rool formula:
digits(num) = 0 if num==0
              1 + (num-1)%9 if num>0

This works because the repeated sum of digits modulo 9 gives the same result as the digital root.

*/

#include<iostream>
using namespace std;

int addDigits(int num){
    if(num==0) return 0;
    return 1+(num-1)%9;
}

// Time Complexity: O(1)
// Space Complexity: O(1)

/*
Let's talk about Digital Root

1. What is a Digital Root?
- The digital root of a number is the single-digit value obtained by repeatedly summing the digits of the number until only one digit remains.

nums = 9875
Step 1: 9 + 8 + 7 + 5 = 29
Step 2: 2 + 9 = 11
Step 3: 1 + 1 = 2

Digital root = 2

So digital root(9875) = 2

2. Naive Approach (Using Loops):
You can find the digital root by iteratively summing digits until it becomes a single digit.
- Time Complexity: O(log n) - because number of digits decreases roughly by a factor of 10 each iteration.
- Space Complexity: O(1)

3. Mathematical Insight (Modulo 9)
Here's the interesting part:
The digital root of a number is related to modulo 9.

Step 1: Why modulo 9?
Let num = d0 + 10*d1 + 100*d2 + ... (decimal expansion)
Since 10 = 1 (mod 9), 100 = 1 (mod 9) etc, 

This means sum of digits modulo 9 = num modulo 9

Step 2: Digital root formula
To get the digital root in O(1):

int digitalRoot(int num){
    if(num==0) return 0;
    return 1 + (num-1)%9;
}

Explanation:
    Numbers divisible 9 -> digital root = 9 (not 0)
    Other numbers -> digital root = num%9

4. Why This Formula Works

    1. num%9 gives the remainder after dividing by 9
    2. Repeatedly adding digits reduces num modulo 9
    3. Subtracting 1 and adding 1 handles the 9 -> 9 instead of 0 issue
    This is the essence of the digital root concept.

5. Summary:
- Naive method: Iteratively sum digits (O(log n))
- O(1) method: Use digital root formula 1 + (num - 1)%9
- Works for any non-negative integer

*/

/*
Observing a pattern
If we compute the digital root manually, we notice:
- Number 1 - 9 --> themselves
- Number 10 - 18 --> digital root = 1-9 again
- Number 19 - 27 --> digital root = 1-9 again
So the digital root repeats every 9 numbers.
This suggest a connection with modulo 9.

Mathematically:
num = sum of digits of num (modulo 9)

Trick: (num-1)%9+1
1. Subtract 1: num-1 --> This shifts number so that multiple of 9 no longer map to 0
2. Take modulo 9: (num-1)%9
3. Add 1 back: 1+(num-1)%9

*/