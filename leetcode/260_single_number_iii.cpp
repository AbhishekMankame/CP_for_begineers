// Leetcode 260 - Single Number III
// https://leetcode.com/problems/single-number-iii/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    public:
    vector<int> singleNumber(vector<int>& nums){
        ll xori=0;
        for(int i:nums) xori^=i;
        ll set_bit=xori&-xori;
        int x=0,y=0;
        for(int i:nums){
            if(i&set_bit) x^=i;
            else y^=i;
        }

        return {x,y};
    }
}