/*Finding factorial of a number using iterative approach*/

#include<iostream>
using namespace std;

int factIter(int n){
    int res = 1;
    for(int i = 2; i <= n;i++){
        res = res * i;
    }

    return res;
}

int main(){
    int n;
    cin >> n;
    cout << factIter(n) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Note: This code does not handle large numbers. For large n, consider using data types like long long or libraries for big integers.