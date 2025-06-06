/* Factorial of number using recursive approach*/

#include<iostream>
using namespace std;

int factRec(int n){
    if(n==0){
        return 1;
    }
    return n*factRec(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << factRec(n)<<endl;
}