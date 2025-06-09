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

// Time Complexity: O(n)
// Space Complexity: O(n) due to recursion stack
// Recursion depth can go up to n, which can lead to stack overflow for large n.
// Recursion stack: It stores the state of each recursive call.

/*Example:
fact(5) 
/
/--> 5 * fact(4) 
   /---> 4 * fact(3) 
       /---> 3 * fact(2) 
           /---> 2 * fact(1) 
               /---> 1 * fact(0) 
                   returns 1
               returns 1
           returns 2
       returns 6
   returns 24

*/