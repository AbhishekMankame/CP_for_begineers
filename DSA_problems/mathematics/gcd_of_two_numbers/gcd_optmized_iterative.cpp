#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    return 0;
}

// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)
// The above code uses an optimized iterative approach to find the GCD of two numbers.
// This method is efficient and works well for large numbers, as it reduces the problem size significantly with each iteration.
// The major advantage of this approach is that it avoids the overhead of recursive function calls, making it suitable for scenarios where stack overflow might be a concern with very large inputs.
// This approach is particularly useful in competitive programming and real-world applications where performance is critical.