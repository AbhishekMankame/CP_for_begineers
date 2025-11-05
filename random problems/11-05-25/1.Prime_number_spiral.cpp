// 1. Prime Number Spiral

/*
Given an integer n, generate an n*n matrix filled with numbers from 1 to n^2
in a spiral order.
Then, count how many prime numbers appear in the matrix.

Example:
Input: n = 3
Matrix:
1 2 3
8 9 4
7 6 5

Prime numbers = {2, 3, 5, 7}
Output: 4

*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int top=0,bottom=n-1,left=0,right=n-1;
    int num = 1;

    while(top<=bottom && left <= right){
        for(int i=left;i<=right;i++) a[top][i]=num++;
        top++;
        for(int i=top;i<=bottom;i++) a[i][right]=num++;
        right--;
        for(int i=right;i>=left;i--) a[bottom][i]=num++;
        bottom--;
        for(int i=bottom;i>=top;i--) a[i][left]=num++;
        left++;

    }

    int primeCount=0;
    for(auto &row:a){
        for(int x:row){
            if(isPrime(x)) primeCount++;
        }
    }

    cout<<primeCount<<endl;
    return 0;
}