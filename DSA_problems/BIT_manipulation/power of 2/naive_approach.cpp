/* checking whether the given number is power of 2 or not */

#include<iostream>
using namespace std;

bool isPow2(int n) {
    if(n == 0) return false;
    while(n != 1) {
        if(n%2!=0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    isPow2(n);
}