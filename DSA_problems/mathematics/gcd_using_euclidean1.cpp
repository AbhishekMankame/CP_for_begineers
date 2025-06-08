/*GCD or HCF of two numbers using repetitive subtraction*/

#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(a!=b){
        if(a > b){
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b)<<endl;
}

// Time Complexity: O(max(a, b))
// Space Complexity: O(1)
// The above code uses a repetitive subtraction method to find the GCD of two numbers.
// This method is not the most efficient, especially for larger numbers, as it can take a long time to converge to the GCD.