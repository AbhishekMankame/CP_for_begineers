// Sum of Cubes

/*

Given n, find sum of squares of first n natural numbers.

*/

#include<iostream>
using namespace std;

long long sumOfCubes_formula(long long n){
    // Formula Approach
    long long sum = n*(n+1)/2;
    return sum*sum; // (n*(n-1)/2)^2
}

long long sumOfCubes_loop(long long n){
    // Brute force approach
    long long sum=0;
    for(long long i=1;i<=n;i++){
        sum += i*i*i;
    }
    return um;
}