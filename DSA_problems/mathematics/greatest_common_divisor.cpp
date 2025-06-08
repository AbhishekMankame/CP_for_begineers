/*Greatest Common Divisor*/
//Naive Approach
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    int res;
    int ms=0;
    for(int i = 1; i <=max(a,b);i++){
        if(a%i==0 and b%i==0){
            res=i;
            ms = max(ms, res);
        }
    }

    return ms;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a,b)<<endl;
}