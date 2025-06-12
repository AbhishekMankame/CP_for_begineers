/* Efficient method to check if Kth bit is set */

#include<iostream>
using namespace std;

void isSet(int n, int k) {
    int x = (1 << (k - 1));
    if((x & 1) != 0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    isSet(n, k);

    return 0;
}