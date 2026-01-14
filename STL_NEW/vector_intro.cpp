#include<bits/stdc++.h>
using namespace std;

void vector(vector<int> v){
    vector<int> v={10,20,12,23};

    // Deletion in vector --> We can use erase function
    v.erase(v.begin()+1); // Here it will delete the element 20, so the new vector will be {10,12,23}

    // If we want to delete the multiple elements
    // {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} --> Here it will follow [start,end), here the end address is after the element

    // Insert function

    vector<int> v(2,100) // {100, 100}
    v.insert(v.begin(),300); // {300, 100, 100}
    v.insert(v.begin()+1,2,10); // {300, 10, 10, 100, 100}

    // copying vector
    vector<int> copy(2,50); // {50, 50}
    v.insert(v.begin(), copy.begin(),copy.end()); // {50, 50, 300, 10, 10, 100, 100}
}   