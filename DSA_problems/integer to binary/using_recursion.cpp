#include<iostream>
using namespace std;

void printBinary(int n) {
    if(n == 0) return;
    printBinary(n/2);
    cout << (n%2);
}

int main() {
    int n  = 10;
    if(n == 0) cout << 0;
    else printBinary(n);
    cout << endl;
    return 0;
}