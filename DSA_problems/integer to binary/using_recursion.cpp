#include<iostream>
using namespace std;

void printBinary(int n) {
    if(n == 0) return;
    printBinary(n/2);
    cout << (n%2);
}

int main() {
    int n ;
    cin >> n;
    if(n == 0) cout << 0;
    else printBinary(n);
    cout << endl;
    return 0;
}

// Time Complexity: O(log n) // The time complexity is O(log n) because the function recursively divides the number by 2, which reduces the problem size logarithmically.
// Space Complexity: O(log n) // The space complexity is O(log n) due to the recursive call stack, which can go up to log(n) levels deep for the input n.