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
    // cout << "GCD of " << a << " and " << b << " is " << gcd(a,b)<<endl;
    cout << gcd(a,b) << endl;
}

// Time Complexity: O(max(a, b))
// Space Complexity: O(1)
// The naive approach works but is not efficient for larger numbers.
// The issus with this approach is that it iterates through all number from 1 to max(a, b) to find the GCD, which can be time-consuming for large values of a and b.