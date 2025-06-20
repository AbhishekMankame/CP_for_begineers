/* checking whether the given number is power of 2 or not */

#include<iostream>
using namespace std;

bool isPow2(int n) {
    if(n == 0) return false;
    while(n != 1) {
        if(n%2!=0) {
            return false;
        }
        n = n/2;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPow2(n);
}

// Time Complexity: O(log n)
// Space Complexity: O(1)