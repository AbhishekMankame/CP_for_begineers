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

/*
Code Logic:
The algorithm:
1. Handles the special case 'n==0'
2. Creates a bitmask of all 1s with the same bit-length as 'n'
3. Uses XOR between the mask and 'n' to flip the bits.

Example:
n = 5 (101 (base 2))
mask --> 111 (base 2)
101^101 = 010 --> 2

Time Complexity:
The main work happens in this loop:
while(temp>0){
    mask=(mask<<1)|1;
    temp>>=1;
}

Each iterations shifts 'temp' right by 1 bit: temp >> 1
So the loop runs once per bit of 'n'.
If 'n' has k bits, then k=floor(log(2))+1
Therefore: Time Complexity=O(k)
where k=number of bits in 'n'
Since k=log(n)

Final time complexity: O(log n)

Space complexity: O(1) --> No additional data structures or recursion is used.

*/