// Leetcode 1009 - Complement of Base 10 Integer
// https://leetcode.com/problems/complement-of-base-10-integer/description/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n){
        if(n==0) return 1;
        int temp=n;
        int mask=0;
        while(temp>0){
            mask = (mask<<1)|1;
            temp>>=1;
        }
        return mask^n;
    }
};