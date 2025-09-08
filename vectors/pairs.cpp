// Pairs
/*Given an array containing N integers, and an number S denoting a target sum. 

Find two distinct integers that can pair up to form target sum. Let us assume there will be only one suct pair.

Input:
array = [10, 5, 2, 3, -6, 9, 11]
S = 4

Output: [10, -6]
*/

// Solving using hashmap approach

#include<iostream>
using namespace std;

vector<int> pairSum(vector<int> arr, int ){

    
}

int main() {
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;
    auto p = pairSum(arr,S);
    if(p.size()==0) cout << "No such pair";
    else cout <<p[0]<<","<<p[1]<<endl;

    return 0;
}