#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int,string> p;  // this is the pair of integer and string
    pair<int,string> p2;

    p = make_pair(2,"abc"); // Pair initialization
    cout << p.first<<endl; // to access first element
    cout << p.second<<endl; // to access second element

    p2 = {2,"abc"}  // one more method to initialize the pair

    // pair is mainly used to maintain the relationship between two
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    // printing the pair_array
    for(int i=0;i<3;i++){
        cout << p_array[i].first << " " << p_array[i].second;
    }

    // vectors are continuous memory block
    vector<int> v;
    int n;
    cin>>n;
    // vector ka size vary kar sakte hai
    vector<pair<int,int>> v2; // vector of pairs
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); // joh bhi value push back ko provide kar rahe hai, usko vector ke end mei add kar dega
        // push_back ka complexity: O(1)
    }
}