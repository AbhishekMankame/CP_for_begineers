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

/*
Optimized approach uses a direct mathematical formula: (n*(n+1)/2)^2
- Time Complexity: O(1)
- Space Complexity: O(1)
- Fastest possible (constant-time computation)
- No loops, no recursion
- Optimized

*/

long long sumOfCubes_loop(long long n){
    // Brute force approach
    long long sum=0;
    for(long long i=1;i<=n;i++){
        sum += i*i*i;
    }
    return um;
}

/*

Not optimized - computes each cube individually
- Time Complexity - O(n)
- Space Complexity - O(1)
- Works fine for small n, bit inefficient for large n (e.g.: n=10^6)

*/

int main() {
    long long n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of cubes (formaula): " << sumOfCubes_formula(n) << endl;
    cout << "Sum of cubes (loop): " << sumOfCubes_loop(n) << endl;

    return 0;
}