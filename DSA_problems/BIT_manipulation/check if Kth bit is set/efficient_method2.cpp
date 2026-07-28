#include<iostream>
using namespace std;

void isSet(int n, int k){
    int x = (n >> (k-1));
    if((1&x)!=0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    return 0;
}