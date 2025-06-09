/* Counting trailing zeros in factorial of a number*/

/*Let's start with the naive solution*/

#include<iostream>
using namespace std;

int countZeros(int n){
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact = fact * i;
    }
    int res = 0;
    while(fact%10==0){
        res++;
        fact = fact/10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// The major issue with this solution is it is going to cost even for slightly higher value of n.
// For example, for n = 20, the factorial is 2432902008176640000, which is a very large number.