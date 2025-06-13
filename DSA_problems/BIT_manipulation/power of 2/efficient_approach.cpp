/*Checking whether the given number is power of 2 or not */

#include<iostream>
using namespace std;

bool isPow2(int n) {
    if(n == 0) return false;
    return (n & (n - 1) == 0);
}

int main() {
    int n;
    cin >> n;
    cout << isPow2(n);
    return 0;
}