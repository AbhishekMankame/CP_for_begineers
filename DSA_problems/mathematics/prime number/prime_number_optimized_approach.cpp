/*Checking whether the given number is prime or not - Optimized Approach */

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    if(n==2 or n==3) return true;
    if(n%2==0 or n%3==0) return false;
    for(int i = 5; i * i <= n; i = i + 5) {
        if(n%i == 0 or n%(n+2) == 0){
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPrime(n) << endl;

    return 0;
}

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
// Note: This is an optimized approach that checks divisible numbers only up to the square root of n, which reduces the number of iterations significantly for larger values of n. It also skips even numbers after checking 2 and 3, further optimizing the process.
// The loop starts from 5 and checks only numbers of the form 6k ± 1, which are the only possible prime candidates after 2 and 3.
// This is because all prime numbers greater than 3 can be expressed in the form of 6k ± 1, where k is a positive integer.