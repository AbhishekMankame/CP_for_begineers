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
*/