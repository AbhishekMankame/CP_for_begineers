/*Prime Factor of a number - Naive Approach*/

#include<iostream>
using namespace std;

int isPrime(int n) {
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i = 5; i * i <= n; i = i + 6){
        if(n%i == 0 || n%(i + 2)==0) {
            return false;
        }
    }

    return true;
}

void primeFactor(int n) {
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)){
            int x = i;
            while(n%x == 0){
                cout << i << " ";
                x = x * i;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    primeFactor(n);

    return 0;
}

// Time Complexity: O(n * sqrt(n))
// Space Complexity: O(1)
// Note: This is a naive approach and not efficient for large numbers.