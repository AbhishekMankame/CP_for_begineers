/*LCM of two numbers - Naive Approach*/

#include<iostream>
using namespace std;

int lcm(int a, int b){
    int res = max(a,b);
    while(true){
        if(res%a==0 and res%b==0){
            return res;
        }
        res++;
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}

// Time Complexity: O(a*b)
// Space Complexity: O(1)
// This code calculates the least common multiple (LCM) of two numbers using a naive approach.