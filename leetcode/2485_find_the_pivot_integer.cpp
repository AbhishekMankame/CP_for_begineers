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