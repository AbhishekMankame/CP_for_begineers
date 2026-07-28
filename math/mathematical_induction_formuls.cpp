// Some most important mathematical induction formulas

#include<iostream>
#include<cmath>
using namespace std;

// Geometric Progression (GP)
double geometricSum(double a, double r, int n){
    if(r==1) return a*n; // special case
    return a*(pow(r,n)-1)/(r-1); 
}

// Arithmetic Progression (AP)
double aritmeticSum(double a, double b, int n){
    return (n/2.0)*(2*a+(n-1)*d);
}

// Sum of power of 2
long long powerOfTwoSum(int n){
    return (1LL << (n+1))-1; // 2^(n+1)-1
}

// Factorial (Iterative)
long long factorial(int n){
    long long fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

// Fibonacci (Iterative for efficiency)
long long fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    long long a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=a;
    }
    return b;
}

// Sum of Odd and Even Numbers
long long sumOdd(int n){    // 1 + 3 + 5 ... + (2*n - 1)
    return 1LL * n * n;
}

long long sumEven(int n){
    return 1LL * n * (n+1);
}