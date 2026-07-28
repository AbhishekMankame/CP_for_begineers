// Modulo
/*
Handling Overflow: Modulo helps reset values when they exceed a limit, avoiding overflow. 
Example: In a timer with 60 seconds, 75%60 = 15

Checking Even or Odd: Modulo 2 identifies even or odd numbers:
- N%2=0: The number is even.
- N%2=1: The number is odd.

Modular Addition: Modular Addition has the following formula:
(A+B)%M = (A%M + B%M)%%M

Modular Subtraction: Modular Subtraction has the following formula:
(A-B)%M = ((A%M-B%M)+M)%M
Note: Careful with the extra M outside

Modular Multiplication: Modular Multiplication has the following formula:
(A*B)%M = ((A%M)*(B%M))%M
Note: Since the operator precedence level of "%","/","*" are all same, they are executed from the left to right in a single line. Hence, the inner brackets are must for correct execution of Modular Multiplication formula.

*/

/*
Greatest Common Divisor(GCD) (also called as HCF - Highest Common Factor)
Greatest Common Divisor of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers.
Example: The GCD of 8 and 12 are 4, that is, GCD(8,12) = 4

Euclidean Algorithm: If we subtract a smaller number from a larger one (we reduce a larger number), GCD doesn't change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
GCD(A,B) = GCD(A-B,B), assuming A>=B
- When difference reaches 0, the solution is B.

Let us prove the Euclidean Algorithm.
If GCD(A,B)=G, this means A%G=0 and B%G=0
Let, A=a*G and B=b*G, where 'a' and 'b' are the factors not common.
(A-B)=(a-b)*G which is also divisible by G.
Hence GCD(A-B,B)=G
*/

/*
Lowest Common Multiple (LCM)
Lowest Common Multiple of two or more integers is the smallest positive integer that is divisible by each of the integers.
LCM of two numbers A and B can be expressed with the following equation. (This works only for two numbers)

LCM(A,B)=A*B/GCD(A,B)

Note: GCD and LCM are associative in nature

*/