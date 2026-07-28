// https://leetcode.com/problems/find-the-pivot-integer/

// 2485 - Find the pivot Integer

#include<bits/stdc++.h>
using namespace std;

// Brute force approach - For very small constraints (n<=1000)
// Brute force by comuting both sums directly
// TC: O(n^2)
int pivotInteger1(int n){
    for(int x=1;x<=n;x++){
        int left=0,right=0;
        for(int i=1;i<=n;i++){
            left+=i;
        }
        for(int i=x;i<=n;i++){
            right+=i;
        }
        if(right==left) return x;
    }
    return -1;
}

// Better approach - Medium constraints (n<=10^5 or 10^6)
// Avoids recomputing sums
// TC: O(n)
// Here the prefix sum approach is O(n) solution where we keep a running sum of numbers from 1 upto x (the left sum) and compare it to the right sum computed from the total.

int pivotInteger2(int n){
    int total = n * (n+1)/2; // total sum from 1 to n
    int left = 0;   // running sum from 1 to x
    for(int x=1;x<=n;x++){
        left+=x;    // add current number to left sum

        // check if left sum equals right sum (total - left + x)
        if(left == total - left + x)
            return x;
    }
    return -1; // no pivot found
}

/*
How it works (prefix sum idea):
1. 'left' keeps sum 1 --> x
2. 'total - left + x' gives sum x --> n
    - We addd 'x' back because 'total - left' removes 'x' from left side, and right side includes it.
3. When they are equal, 'x' is the pivot.

Complexity:
Time: O(n)
Space: O(1)

*/

/*
Optimal approach - For large constraints (n<=10^9)

Here the pivot problem usually means:
Find an integer 'x' such that the sum of numbers from 1 to x equals the sum of numbers from x to n.

Mathematically: 1 + 2 + 3 + .... + x = x + (x+1) + .... + n

Total sum from 1 to n: S = n*(n+1)/2

If x is pivot: 1 + 2 + 3 + ... + x = x*(x+1)/2
And: x*(x+1)/2 = S - x*(x-1)/2;

This simplifies to: S = x^2

So x = sqrt(S) and it must be an integer

*/

int pivotInteger3(int n){
    int total = n*(n-1)/2;
    int x = sqrt(total);
    if(x*x==total) return x;

    return -1;
}

/*
Complexity details:

1. Time Complexity
- n*(n+1)/2 -> O(1) (arithmetic operation)
- sqrt(total) -> O(1) in most practical implementations (hardware instruction or fast library function)
- x*x == total -> O(1)

Total: O(1)
Even if 'n' is very large (up to 10^9 or 10^12), this is still constant time.

2. Space Complexity:
- Only a few variables (total, x) are used
Total: O(1)

*/