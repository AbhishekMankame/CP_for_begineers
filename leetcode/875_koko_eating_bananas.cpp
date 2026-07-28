// Leetcode 875 - Koko Eating Bananas
// Medium

/*
Koko loves to bananas. There are 'n' piles of bananas, the 'ith' pile has 'piles[i]' bananas. The guards have gone and will come back in 'h' hours.

Koko can decide her business-per-hour eating speed of 'k'. Each hour, she chooses some pile of bananas and eats 'k' bananas from that file. If the pile has less than 'k' bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer 'k' such that she can eat all the bananas within 'h' hours.

Example 1:
Input: piles = [3,6,7,11], h=8
Output: 4

Example 2:
Input: pile = [30,11,23,4,20], h=5
Output: 30

Example 3:
Input: piles = [30,11,23,4,20], h=6
Output: 23

Constraints:
- 1 <= piles.length <= 10^4
- piles.length <=h <= 10^9
- 1 <= piles[i] <= 10^9

Topics: Array, Binary Search
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maxElement(vector<int>& v){
    int maxE=INT_MIN;
    for(int i=0;i<v.size();i++){
        maxE = max(maxE,v[i]);
    }

    return maxE;
}

long long int timeS(vector<int>& piles, int hour){
    long long int time=0;
    for(int i=0;i<piles.size();i++){
        time+=(piles[i]+hour-1)/hour;
    }
    return time;
}

int minEatingSpeed(vector<int>& piles, int h){
    int low=1,high=maxElement(piles),ans=high;
    while(low<=high){
        int mid = low + (high - low)/2;
        long long int reqTime=timeS(piles,mid);
        if(reqTime<=h){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

// Time Complexity: O(n*log(maxElement))
// Space Complexity: O(1)