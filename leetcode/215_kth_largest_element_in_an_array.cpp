https://leetcode.com/problems/kth-largest-element-in-an-array/description/

#include<bits/stdc++.h>
using namespace std;

// Using min heap 1
int findKthLargest1(vector<int>& nums, int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int num:nums){
        pq.push(num);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}

// Using min heap 2
int findKthLargest2(vector<int>& nums, int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(nums[i]);
    }
    for(int i=k;i<nums.size();i++){
        if(pq.top()<nums[i]){
            pq.pop();
            pq.push(nums[i]);
        }
    }
    return pq.top();
}