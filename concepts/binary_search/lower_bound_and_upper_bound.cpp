#include<iostream>
#include<vector>
using namespace std;

int lower_bound(vector<int>& v, int target){
    int low=0, high=v.size();
    while(low<high){
        int mid = low + (high-low)/2;
        if(v[mid]<target) low=mid+1;
        else high=mid;
    }

    return low; // first index where v[i] >= target
}

int upper_bound(vector<int>& v, int target) {
    int low=0,high=v.size();
    while(low<high){
        int mid = low + (high-low)/2;
        if(v[mid]<=target) low=mid+1;
        else high = mid;
    }
    return low; // first index where v[i] > target
}