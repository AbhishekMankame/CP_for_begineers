// https://leetcode.com/problems/number-complement/

// 476 - Number Complement

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int findComplement(int n){
        int temp=n;
        int mask=0;
        while(temp){
            mask = (mask<<1)|1;
            temp>>=1;
        }
        return mask^n;
    }
}

// TC: O(log n)
// SC: O(1)