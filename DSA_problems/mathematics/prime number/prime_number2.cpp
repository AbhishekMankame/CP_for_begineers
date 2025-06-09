#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n==1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n%i==0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPrime(n);

    return 0;
}

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
// Note: This is an optimized approach that checks divisible numbers only up to the square root of n, which reduces the number of iterations significantly for larger values of n.