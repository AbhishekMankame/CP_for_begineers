/*Checking whether the number is prime or not - Naive Approach */

#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n==1) return false;
    for(int i = 2; i < n; i++){
        if(n%i==0) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPrime(n) << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Note: This is naive approach and can be improved further by checking only up to sqrt(n) and skipping even number after checking 2.