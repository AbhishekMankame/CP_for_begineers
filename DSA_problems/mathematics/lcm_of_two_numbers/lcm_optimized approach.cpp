/*LCM of two numbers - Optimized Approach*/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;

    return 0;
}

// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)
// This code calculates the least common multiple (LCM) of two numbers using an optimized approach based on the relationship between LCM and GCD (Greatest Common Divisor).
// The LCM is calculated using the formula: LCM(a, b) = (a * b) / GCD(a, b).
// The GCD is computed using the Euclidean algorithm, which is efficient and has a logarithmic time complexity.
// The optimized approach significantly reduces the time complexity compared to the naive approach, making it suitable for larger inputs.
// The space complexity remains constant as we are using a fixed amount of space for variables.