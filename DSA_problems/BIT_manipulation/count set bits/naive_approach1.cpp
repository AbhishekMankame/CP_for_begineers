/*Count set bits - Naive Approach*/

#include<iostream>
using namespace std;

int countBits(int n) {
    int res = 0;
    while(n>0){
        if(n%2==0) res++;
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    cout << countBits(n) << endl;

    return 0;
}