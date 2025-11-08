// Some most important mathematical induction formulas

#include<iostream>
#include<cmath>
using namespace std;

// Geometric Progression (GP)
double geometricSum(double a, double r, int n){
    if(r==1) return a*n; // special case
    return a*(pow(r,n)-1)/(r-1); 
}