// Recursion: A function that calls itself to solve a problem
// Example: Factorial of a number using recursion
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}