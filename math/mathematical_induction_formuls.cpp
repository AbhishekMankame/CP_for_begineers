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

