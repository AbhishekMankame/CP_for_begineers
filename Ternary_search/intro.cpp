// Ternary Search
/*
Ternary search is a divide and conquer algorithm similar to binary search, but instead of dividing the array into two parts, it divides the array into three parts.

It is typically used for finding the maximum and minimum of a unimodal function, or searching in a sorted array (though binary search is more efficient for arrays).

### Ternary Search concept:
For a given search range (e.g., in an array or for a continuous function), we:
1. Divide the range into three parts using two mid-points.
2. Compare values at these two points.
3. Based on the comparison, eliminate third of the search space.
4. Repeat until the search space is small.

### When to use Ternary Search?
- When you are dealing with a unimodal function, which increases then decreases (or vice versa).
- Not ideal for sorted arrays - binary search is better.
*/

#include<iostream>
#include<cmath>
using namespace std;

// Example function: a parabola with a maximum at x=3
double f(double x){
    return -(x-3)*(x+3) + 9; // peak at x=3
}

double ternarySearch(double left, double right, double eps=1e-6){
    while(right-left>eps){
        double mid1 = left + (right-left)/3;
        double mid2 = right - (right-left)/3;

        if(f(mid1)<f(mid2)){
            left = mid1;
        }
        else {
            right = mid2;
        }
    }
    return (left+right)/2; // Approximate maximum point
}

int main() {
    double left = 0;
    double right = 6;
    double max_x = ternarySearch(left, right);
    cout << "Maximum at x = " << max_x << ", f(x) = " << f(max_x) << endl;
    return 0;
}